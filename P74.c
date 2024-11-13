#include <stdio.h>

void mergeArrays(int A[], int m, int B[], int n, int C[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and pick the smaller element from either A or B
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy any remaining elements of A
    while (i < m) {
        C[k++] = A[i++];
    }

    // Copy any remaining elements of B
    while (j < n) {
        C[k++] = B[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
    int C[m + n];  // Array to hold the merged result

    // Merge A and B into C
    mergeArrays(A, m, B, n, C);

    // Print the merged array
    printf("Merged array C: ");
    printArray(C, m + n);
return 0;
}
