#include <stdio.h>

// Function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by N positions
void rotateArray(int arr[], int n, int d) {
    // Ensure the rotation amount is within the array size
    d = d % n;

    // Step 1: Reverse the first 'd' elements
    reverse(arr, 0, d - 1);

    // Step 2: Reverse the remaining 'n - d' elements
    reverse(arr, d, n - 1);

    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;

    printf("Enter number of positions to rotate: ");
    scanf("%d", &d);

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, d);

    printf("Array after rotating by %d positions: ", d);
    printArray(arr, n);
return 0;
}
