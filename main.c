


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    bool countSwap = false;
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                countSwap = true;
            }
        }
        if (!countSwap) break;
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[3] = {};
    int valueA;
    int valueB;
    int valueC;
    printf("Digite 3 numeros inteiros\n");
    scanf("%d", &valueA);
    scanf("%d", &valueB);
    scanf("%d", &valueC);

    arr[0] = valueA;
    arr[1] = valueB;
    arr[2] = valueC;
    

    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    printArray(arr, size);

    printf("\n");

    printf("%d\n", valueA);
     printf("%d\n", valueB);
      printf("%d", valueC);

    
    exit(0);
}
