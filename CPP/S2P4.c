#include <stdio.h>


void addMatrix(int *a, int *b, int *c, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            
            *(c + i*n + j) = *(a + i*n + j) + *(b + i*n + j);
        }
    }
}

int main() {
    int m, n;

    printf("Enter rows and columns of matrix: ");
    scanf("%d ,%d", &m, &n);

    int a[m][n], b[m][n], c[m][n];

    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    addMatrix((int *)a, (int *)b, (int *)c, m, n);

    
    printf("Resultant Matrix (Sum):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
