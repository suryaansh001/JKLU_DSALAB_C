#include <stdio.h>
#include <stdlib.h>

void insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    printArray(arr, size);
    
    insertion(arr, size);
    
    printf("Sorted array: \n");
    printArray(arr, size);
    
    return 0;
}
