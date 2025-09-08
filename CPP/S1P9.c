#include <stdio.h>

int main() {
    
    char *names[5] = {"Amir", "Sara", "noor", "Riya", "Omar"};

    printf("List of Names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}