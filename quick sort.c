#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

// Function to swap two elements
void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(char arr[], int low, int high) {
    char pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (tolower(arr[j]) <= tolower(pivot)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Function to implement QuickSort
void quickSort(char arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

// Function to print the array
void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

// Function to add a delay
void delay(int milliseconds) {
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now - then) < pause)
        now = clock();
}

int main() {
    int size;
    printf("*****QUICK SORT*****\n");
    printf("AUTHOR: MRUTHYUNJAYA S \n");
    printf("DATE: 17/7/2024\n");
    printf("**************\n\n\n");

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    char arr[size];
    printf("Please Enter the elements to sort (separated by space):\n");
    for (int i = 0; i < size; i++) {
        scanf(" %c", &arr[i]); // Space before %c to skip whitespace
    }

    clock_t start, end;
    double time_taken;

    start = clock();
    delay(5000); // Add a delay of 5000 milliseconds (5 seconds)
    quickSort(arr, 0, size - 1);
    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to sort this array: %f seconds\n", time_taken);

    printf("The Sorted array is: ");
    printArray(arr, size);

    return 0;
}
