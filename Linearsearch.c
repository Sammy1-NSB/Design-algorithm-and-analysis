#include <stdio.h>

// Function for Linear Search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i; // return index if found
        }
    }
    return -1; // return -1 if not found
}

int main() {
    int arr[100], n, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if(result != -1) {
        printf("Element found at position %d\n", result + 1);
    } else {
        printf("Element not found\n");
    }

    return 0;
}