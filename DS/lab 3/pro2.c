#include <stdio.h>

int main() {
    int A[3][2], B[2][3], C[3][3];
    int i, j, k;

    // Read first matrix A (3x2)
    printf("Enter elements of Matrix A (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second matrix B (2x3)
    printf("Enter elements of Matrix B (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to 0
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 2; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    printf("Result Matrix C (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
