#include <stdio.h>

int main() {
    int a[2][2][2];   
    int *p = (int *)a;  
    int sum = 0;

    printf("Enter 8 elements of 3D array:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", p + i);   
    }

    
    for (int i = 0; i < 8; i++) {
        sum += *(p + i);  
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}