
   #include <stdio.h>

void transpose(int *a, int *t, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(t + j*n + i) = *(a + i*n + j);
        }
    }
}

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[10][10], t[10][10];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    transpose((int *)a, (int *)t, n);

    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}