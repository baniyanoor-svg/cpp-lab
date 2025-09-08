

#include <stdio.h>

void findMaxMin(int *arr, int n, int *max, int *min) {
    *max = *arr;
    *min = *arr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxVal, minVal;
    findMaxMin(arr, n, &maxVal, &minVal);

    printf("Maximum element = %d\n", maxVal);
    printf("Minimum element = %d\n", minVal);

    return 0;
}
