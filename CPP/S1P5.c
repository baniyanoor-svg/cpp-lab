#include <stdio.h>

// Function to find maximum of three numbers using if else
int max(int *a, int *b, int *c) {
    if (*a >= *b && *a >= *c) {
        return *a;
    } 
    else if (*b >= *a && *b >= *c) {
        return *b;
    } 
    else {
        return *c;
    }
}

int main() {
    int x, y, z, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    largest = max(&x, &y, &z);

    printf("Maximum = %d\n", largest);

    return 0;
}
