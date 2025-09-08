#include <stdio.h>


int strLength(char *s) {
    int len = 0;
    while (*s != '\0') {  
        len++;
        s++;              
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string = %d\n", strLength(str));
    return 0;
}