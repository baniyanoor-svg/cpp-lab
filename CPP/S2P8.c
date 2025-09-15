#include <stdio.h>

int main() {
    int a[3][3][3];
    int *p = (int *)a;   

    printf("Enter 27 elements of 3x3x3 matrix:\n");
    for (int i = 0; i < 27; i++) {
        scanf("%d", p + i);   
    }

    printf("\n3D Matrix:\n");
    for (int i = 0; i < 3; i++) {          
        printf("Layer %d:\n", i+1);
        for (int j = 0; j < 3; j++) {      
            for (int k = 0; k < 3; k++) {  
                
                printf("%d ", *(p + i*9 + j*3 + k));
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}