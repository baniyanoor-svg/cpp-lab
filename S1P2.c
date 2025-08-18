//swap two numbers
//call by value
#include <stdio.h>

void swap1(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n swap1function: a = %d, b = %d", a, b);
}
void swap2(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nswap2function: a = %d, b = %d", *a, *b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: x = %d, y = %d", x, y);

    
    swap1(x, y);
    printf("\nAfter swap1: x = %d, y = %d", x, y);

    
    swap2(&x, &y);
    printf("\nAfter swap2 : x = %d, y = %d\n", x, y);

    return 0;
}
