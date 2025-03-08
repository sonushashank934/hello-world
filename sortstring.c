#include<stdio.h>
#include<string.h>

// Function to perform bubble sort for strings
void bubbleSort(char arr[][100], int n) {
    int i, j;
    char temp[100];
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for(int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Array initialization of strings
    char arr[][100] = {"banana", "apple", "grape", "cherry", "mango", "pear"};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the unsorted array
    printf("Unsorted array:\n");
    printArray(arr, n);

    // Perform bubble sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
