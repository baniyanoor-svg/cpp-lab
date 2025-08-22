#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    int (*p)[5] = &a;

    
    int *arr[5];
    for(int i = 0; i < 5; i++) {
        arr[i] = &a[i];   
    }

    
    printf("Pointer to array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", (*p)[i]);
    }

    
    printf("Array of pointers:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", *arr[i]);
    }

    return 0;
}