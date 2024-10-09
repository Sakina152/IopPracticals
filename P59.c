#include <stdio.h>

int main() {
    int array1[10], array2[10], temp;
    int i;

    // Reading values into array1
    printf("Enter 10 integers for the first array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array1[i]);
    }

    // Reading values into array2
    printf("Enter 10 integers for the second array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array2[i]);
    }

    // Swapping the values of array1 and array2
    for (i = 0; i < 10; i++) {
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    // Displaying the swapped arrays
    printf("\nAfter swapping:\n");

    printf("First array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array1[i]);
    }

    printf("\nSecond array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}