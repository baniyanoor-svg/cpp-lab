#include <stdio.h>

int main() {
   
    char *names[5] = {
        "Ali",
        "Sara",
        "John",
        "Mehak",
        "Rahul"
    };

    
    for (int i = 0; i < 5; i++) {
        printf("%s\n", *(names + i));  
    }

    return 0;
}