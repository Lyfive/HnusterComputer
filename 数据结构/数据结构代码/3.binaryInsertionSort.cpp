#include <stdio.h>
#include<iostream>

// Function to perform binary search
int binarySearch(int array[], int item, int low, int high) {
    if (high <= low) {
        return (item > array[low]) ? (low + 1) : low;
    }

    int mid = (low + high) / 2;

    if (item == array[mid]) {
        return mid + 1;
    }

    if (item > array[mid]) {
        return binarySearch(array, item, mid + 1, high);
    }

    return binarySearch(array, item, low, mid - 1);
}

// Function to perform binary insertion sort
void binaryInsertionSort(int array[], int length) {
    for (int i = 1; i < length; i++) {
        int selected = array[i]; // Select the element to be inserted
        int j = i - 1; // Initialize the index to start searching for insertion position

        // Find the correct position to insert using binary search
        int insertionIndex = binarySearch(array, selected, 0, j);

        // Move elements to create space for the selected element
        while (j >= insertionIndex) {
            array[j + 1] = array[j];
            j--;
        }

        // Insert the selected element at the correct position
        array[j + 1] = selected;
    }
}

// Function to display the elements of the array
void displayArray(int array[], int length) {
    printf("Sorted Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {12, 11, 13, 5, 6}; // Example array
    int length = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    displayArray(array, length);

    binaryInsertionSort(array, length);

    printf("After Binary Insertion Sort: ");
    displayArray(array, length);

    return 0;
}
