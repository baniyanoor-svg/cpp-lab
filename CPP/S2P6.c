#include <stdio.h>


void rowMax(int *a, int m, int n) {
    for (int i = 0; i < m; i++) {
        int max = *(a + i*n + 0);   
        for (int j = 1; j < n; j++) {
            if (*(a + i*n + j) > max) {
                max = *(a + i*n + j);
            }
        }
        printf("Maximum of row %d = %d\n", i+1, max);
    }
}

int main() {
    int m, n;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int a[10][10]; 

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);  
        }
    }

    printf("\nRow-wise Maximums:\n");
    rowMax((int *)a, m, n);

    return 0;
}