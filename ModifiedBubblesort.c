#include <stdio.h>

// Function for Modified Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for(i = 0; i < n - 1; i++) {
        swapped = 0; // reset flag

        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // mark swap happened
            }
        }

        // If no swapping happened → array is already sorted
        if(swapped == 0) {
            break;
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}