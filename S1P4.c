//sum of two numbers using pointers
#include <stdio.h>

// Function that takes two integer pointers and returns their sum
int sum(int *a, int *b) {
    return *a + *b;  
}

int main() {
    int num1, num2, result;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    result = sum(&num1, &num2);

    
    printf("Sum = %d\n", result);

    return 0;
}
