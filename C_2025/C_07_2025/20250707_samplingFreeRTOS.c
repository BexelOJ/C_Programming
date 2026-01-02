#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include <stdio.h>

#define BUFFER_SIZE 1000
#define SAMPLE_INTERVAL_MS 50

int buffer[BUFFER_SIZE];
int head = 0;
SemaphoreHandle_t xMutex;

int read_sensor() {
    return rand() % 1000;
}

void vSamplingTask(void* pvParameters) {
    while (1) {
        int data = read_sensor();

        xSemaphoreTake(xMutex, portMAX_DELAY);
        buffer[head] = data;
        head = (head + 1) % BUFFER_SIZE;
        xSemaphoreGive(xMutex);

        vTaskDelay(pdMS_TO_TICKS(SAMPLE_INTERVAL_MS));
    }
}

void vRequestTask(void* pvParameters) {
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(55000));  // wait 55s

        xSemaphoreTake(xMutex, portMAX_DELAY);
        int index = (head + 1) % BUFFER_SIZE;
        printf("Value from 50s ago: %d\n", buffer[index]);
        xSemaphoreGive(xMutex);
    }
}

int main(void) {
    xMutex = xSemaphoreCreateMutex();

    xTaskCreate(vSamplingTask, "Sampler", 1000, NULL, 1, NULL);
    xTaskCreate(vRequestTask, "Requester", 1000, NULL, 1, NULL);

    vTaskStartScheduler();
    for (;;);
    return 0;
}

