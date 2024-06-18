#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            left = mid + 1;

        // If x is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If we reach here, then the element was not present
    return -1;
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    printf("Array: \n");
    printArray(arr, n);
    int result = binarySearch(arr, 0, n-1, x);
    if(result == -1)
        printf("Element %d is not present in array\n", x);
    else
        printf("Element %d is present at index %d\n", x, result);
    return 0;
}
