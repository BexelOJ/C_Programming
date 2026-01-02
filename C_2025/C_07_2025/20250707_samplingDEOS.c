// Pseudocode (DEOS-specific APIs vary by integration)

#define BUFFER_SIZE 1000
#define SAMPLE_INTERVAL_TICKS 5   // Assuming tick = 10ms

int buffer[BUFFER_SIZE];
int head = 0;

void sampling_task(void) {
    while (1) {
        int data = read_sensor();

        disable_interrupts();
        buffer[head] = data;
        head = (head + 1) % BUFFER_SIZE;
        enable_interrupts();

        deos_delay(SAMPLE_INTERVAL_TICKS);  // 50ms
    }
}

void request_task(void) {
    while (1) {
        deos_delay(550);  // Delay 55s (in 100ms units)
        disable_interrupts();
        int index = (head + 1) % BUFFER_SIZE;
        print("50s old value: %d", buffer[index]);
        enable_interrupts();
    }
}

