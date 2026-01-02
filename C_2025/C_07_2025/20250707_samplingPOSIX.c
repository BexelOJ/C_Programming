#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

#define BUFFER_SIZE 1000
#define SAMPLE_INTERVAL_MS 50

int buffer[BUFFER_SIZE];
int head = 0;
pthread_mutex_t lock;

int read_sensor() {
    return rand() % 1000;  // Simulated sensor data
}

void* sample_thread(void* arg) {
    while (1) {
        int data = read_sensor();

        pthread_mutex_lock(&lock);
        buffer[head] = data;
        head = (head + 1) % BUFFER_SIZE;
        pthread_mutex_unlock(&lock);

        usleep(SAMPLE_INTERVAL_MS * 1000);  // sleep 50ms
    }
    return NULL;
}

void get_50s_old_value() {
    pthread_mutex_lock(&lock);
    int index = (head + 1) % BUFFER_SIZE;  // 50s ago
    printf("Value from 50s ago: %d\n", buffer[index]);
    pthread_mutex_unlock(&lock);
}

int main() {
    pthread_t thread;
    pthread_mutex_init(&lock, NULL);
    srand(time(NULL));

    pthread_create(&thread, NULL, sample_thread, NULL);

    // Simulate user requests every few seconds
    while (1) {
        sleep(55);  // Wait till buffer fills and is rolling
        get_50s_old_value();
    }

    pthread_join(thread, NULL);
    pthread_mutex_destroy(&lock);
    return 0;
}
