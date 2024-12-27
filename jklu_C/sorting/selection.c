#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minele = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minele]) {
                minele = j;
            }
        }
        swap(&arr[i], &arr[minele]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("neter the size of the array");
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the elemnet");
        scanf("%d",&arr[i]);
    }
    printArray(arr, size);
    
    selection(arr, size);
    
    printf("Sorted array: \n");
    printArray(arr, size);
    
    return 0;
}
