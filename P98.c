#include <stdio.h>
#include <stdlib.h>

void matrixMultiply(int **mat1, int **mat2, int **result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(*(result + i) + j)=0; // Initialize result[i][j] to 0
            for (int k = 0; k < c1; k++) {
                *(*(result + i) + j)+= *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for matrix 1
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for matrix 2
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible (columns of Matrix 1 != rows of Matrix 2).\n");
        return 0;
    }

    // Dynamically allocate memory for the matrices
    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    int **result = (int **)malloc(r1 * sizeof(int *));

    for (int i = 0; i < r1; i++)
        mat1[i] = (int *)malloc(c1 * sizeof(int));
    for (int i = 0; i < r2; i++)
        mat2[i] = (int *)malloc(c2 * sizeof(int));
    for (int i = 0; i < r1; i++)
        result[i] = (int *)malloc(c2 * sizeof(int));

    // Input elements for matrix 1
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", (*(mat1 + i) + j));
        }
    }

    // Input elements for matrix 2
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", (*(mat2 + i) + j));
        }
    }

    // Multiply the matrices
    matrixMultiply(mat1, mat2, result, r1, c1, c2);

    // Print the result matrix
    printf("The product of the two matrices is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < r1; i++)
        free(mat1[i]);
    free(mat1);

    for (int i = 0; i < r2; i++)
        free(mat2[i]);
    free(mat2);

    for (int i = 0; i < r1; i++)
        free(result[i]);
    free(result);
    return 0;
}
