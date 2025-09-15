#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float avg, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);  
    }

    
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    avg = sum / n;

    printf("Average = %.2f\n", avg);

    
    free(arr);

    return 0;
}