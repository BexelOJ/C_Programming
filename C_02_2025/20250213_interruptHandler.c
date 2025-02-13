#include <stdio.h>
#include <signal.h>
#include <unistd.h>

volatile int interruptFlag = 0;

// ISR handler
void handle_interrupt(int sig) 
{
    interruptFlag = 1; // Set the interrupt flag to indicate that an interrupt occurred
    printf("\nInterrupt received! ISR executed.\n");
}

int main()
 {
    // Register the ISR (signal handler)
    signal(SIGINT, handle_interrupt);

    printf("Program running... Press Ctrl+C to trigger interrupt.\n");

    while(1) 
    {
        // Main program logic
        if (interruptFlag) 
        {
            printf("Handling interrupt logic in main program.\n");
            interruptFlag = 0; // Reset the interrupt flag
        }
        // Simulate some other work (sleeping)
        sleep(1);
    }

    return 0;
}

