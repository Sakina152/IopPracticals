#include <stdio.h>

// Function to find the pivot element in a sorted and rotated array
int findPivot(int arr[], int low, int high) {
    if (high < low) {
        return -1;  // No pivot found
    }
    if (high == low) {
        return low;  // Only one element
    }

    int mid = low + (high - low) / 2;  // Middle index

    // Check if mid is the pivot
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid + 1;
    }
    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid;
    }

    // Decide which side to search
    if (arr[low] <= arr[mid]) {
        return findPivot(arr, mid + 1, high);  // Pivot is in the right half
    } else {
        return findPivot(arr, low, mid - 1);  // Pivot is in the left half
    }
}

int main() {
    int arr[] = {15, 18, 2, 3, 6, 12};  // Example rotated array
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivot(arr, 0, n - 1);

    if (pivotIndex != -1) {
        printf("Pivot element is %d at index %d\n", arr[pivotIndex], pivotIndex);
    } else {
        printf("No pivot element found\n");
    }

 return 0;
}