#include <stdio.h>

int main() {
    char string[1000];
    printf("Hullo, Mate!\nGive me a string and I'll tell you how many characters are in there.\n");
    printf("Your string (it should not pass of 1000 chars): ");

    fgets(string, sizeof(string), stdin);

    int length = 0;
    while (string[length++] != '\0');

    printf("Your string has %d characters.\n", length);
    printf("See you around, mate!\n");

    return 0;
}