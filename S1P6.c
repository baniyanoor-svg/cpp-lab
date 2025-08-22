#include <stdio.h>
int main() {
    int arr[5];     
    int *p;         
    int i;

    p = arr;        

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", p + i);   
    }

    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));   
    }

    return 0;
}