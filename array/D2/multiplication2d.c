#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;

    // Input dimensions
    printf("Enter rows and columns of first matrix (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix (p q): ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    // Input Matrix A
    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("Enter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Initialize Matrix C
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("Resultant Matrix C (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
