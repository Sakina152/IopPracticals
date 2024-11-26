#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    char *temp; // Temporary pointer for swapping strings
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap pointers if strings are out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Declare an array of pointers to strings
    char strings[n][100];
    char *ptrs[n];

    // Input strings and initialize pointers
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        ptrs[i] = strings[i]; // Assign the address of each string to the pointer array
    }

    // Sort strings using pointers
    sortStrings(ptrs, n);

    // Print sorted strings
    printf("\nStrings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptrs[i]);
    }
    return 0;
}
