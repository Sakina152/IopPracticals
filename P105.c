#include <stdio.h>
#include <string.h>

// Function to swap two characters using pointers
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations
void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str); // Print the permutation
    } else {
        for (int i = l; i <= r; i++) {
            // Swap characters
            swap((str + l), (str + i));
            // Recurse with the next level
            permute(str, l + 1, r);
            // Backtrack (restore the original configuration)
            swap((str + l), (str + i));
        }
    }
}

int main() {
    char str[] = "ABCD";  // Input string
    int n = strlen(str);
    
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);  // Call the permutation function
    return 0;
}
