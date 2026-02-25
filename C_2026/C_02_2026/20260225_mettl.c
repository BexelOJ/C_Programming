#include <string.h>
#include <stdio.h>

void printUniqueContinuousSubarrays(int arr[], int N, int R) {
    int seen[100][4] = { 0 };  // Simple hash for small arrays
    int unique_count = 0;

    printf("Unique subarrays after removing %d continuous elements:\n", R);

    for (int start = 0; start <= N - R; start++) {
        // Build subarray
        int sub[4], len = 0;
        for (int i = 0; i < N; i++) {
            if (i < start || i >= start + R) {
                sub[len++] = arr[i];
            }
        }

        // Check uniqueness (simple hash by content)
        int is_unique = 1;
        for (int k = 0; k < unique_count; k++) {
            int match = 1;
            for (int j = 0; j < len; j++) {
                if (sub[j] != seen[k][j]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                is_unique = 0;
                break;
            }
        }

        if (is_unique) {
            printf("Remove [%d,%d]: [", start, start + R - 1);
            for (int j = 0; j < len; j++) printf("%d,", sub[j]);
            printf("]\n");
            // Store
            for (int j = 0; j < len; j++) seen[unique_count][j] = sub[j];
            unique_count++;
        }
    }

    printf("Total unique: %d\n", unique_count);
}


int main() {
    int arr1[] = {5,6,1,2};
    int arr2[] = {17,5,8,12,10,8,5};
    int N_1 = (sizeof(arr1) / sizeof(int));
    int N_2 = (sizeof(arr2) / sizeof(int));
    int R_1 = 2;
    int R_2 = 3;
    // printf("Result: %d\n", N_1);
    
    //printUniqueContinuousSubarrays(arr1, N_1, R_1);
    printUniqueContinuousSubarrays(arr2, N_2, R_2);
    
    //printf("Result: %d\n", res)
    
    return 0;
}



