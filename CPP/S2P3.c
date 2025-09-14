//sum of even and odd 
#include <stdio.h>

void sumEvenOdd(int *arr, int n) {
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            evenSum += *(arr + i);  // pointer arithmetic
        else
            oddSum += *(arr + i);
    }

    printf("Sum of Even Elements = %d\n", evenSum);
    printf("Sum of Odd Elements = %d\n", oddSum);
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sumEvenOdd(arr, n);

    return 0;
}
