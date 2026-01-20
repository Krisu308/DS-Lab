#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    // Read first matrix
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second matrix
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result matrix
    printf("Addition of two matrices (Matrix C):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
