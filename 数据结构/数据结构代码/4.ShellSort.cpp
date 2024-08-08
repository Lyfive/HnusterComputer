#include <stdio.h>

// Shell sort function
void shellSort(int arr[], int n) {
    // Define the initial value of the gap sequence
    int gap = n / 2;

    // Reduce the gap sequence gradually
    while (gap > 0) {
        // Perform insertion sort operation for each group starting from gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            // If the previous element is greater than temp, move the previous element backward
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            // Insert temp into the correct position
            arr[j] = temp;
        }
        // Reduce the gap
        gap /= 2;
    }
}

// Test function
int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Call the Shell sort function
    shellSort(arr, n);

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
