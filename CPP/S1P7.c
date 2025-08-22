#include <stdio.h>

// Function to reverse array using pointers
void reverse(int *arr, int n) {
    int i, temp;
    int *p = arr;               // pointer to first element
    int *q = arr + n - 1;       // pointer to last element

    for(i = 0; i < n/2; i++) {
        temp = *p;
        *p = *q;
        *q = temp;

        p++;    // move forward
        q--;    // move backward
    }
}

int main() {
    int arr[5], i;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, 5);

    printf("Reversed array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);   
    }

    return 0;
}