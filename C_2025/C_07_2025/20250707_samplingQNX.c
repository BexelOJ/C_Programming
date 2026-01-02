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
    return rand() % 1000;
}

void* sample_thread(void* arg) {
    while (1) {
        int data = read_sensor();

        pthread_mutex_lock(&lock);
        buffer[head] = data;
        head = (head + 1) % BUFFER_SIZE;
        pthread_mutex_unlock(&lock);

        usleep(SAMPLE_INTERVAL_MS * 1000);
    }
    return NULL;
}

void* request_thread(void* arg) {
    while (1) {
        sleep(55);
        pthread_mutex_lock(&lock);
        int index = (head + 1) % BUFFER_SIZE;
        printf("Value from 50s ago: %d\n", buffer[index]);
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main() {
    pthread_t sampler, requester;
    pthread_mutex_init(&lock, NULL);
    srand(time(NULL));

    pthread_create(&sampler, NULL, sample_thread, NULL);
    pthread_create(&requester, NULL, request_thread, NULL);

    pthread_join(sampler, NULL);
    pthread_join(requester, NULL);
    pthread_mutex_destroy(&lock);
    return 0;
}

