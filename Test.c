#include <stdio.h>

#define VERSION "1.0.0"

int main() {
    char name[50];
    printf("Program Version: %s\n", VERSION);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to the program.\n", name);
    return 0;
}
