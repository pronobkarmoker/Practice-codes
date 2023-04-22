#include <stdio.h>

void countingSort(int arr[], int n, int range) {
    int count[range+1]; // count array to store the count of elements
    int output[n]; // output array to store sorted elements
    int i;

    // Initialize count array to 0
    for (i = 0; i <= range; i++) {
        count[i] = 0;
    }

    // Store count of each element
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Store cumulative count of each element
    for (i = 1; i <= range; i++) {
        count[i] += count[i-1];
    }

    // Build output array
    for (i = n-1; i >= 0; i--) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    // Copy output array to input array
    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 2, 1, 5, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int range = 7; // range of input array elements

    countingSort(arr, n, range);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
