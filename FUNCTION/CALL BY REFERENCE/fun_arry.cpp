#include <stdio.h>

// Function declarations
void printArray(int arr[], int size);
void modifyArray(int arr[], int size);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    
    printf("Original array: ");
    printArray(numbers, size);
    
    modifyArray(numbers, size);
    
    printf("Modified array: ");
    printArray(numbers, size);
    
    return 0;
}

// Function definitions
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modifyArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2; // Double each element
    }
}