#include <stdio.h>

int main() {
    // Formatted Input and Output
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered the number: %d\n", number);

    // Unformatted Input and Output
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    printf("You entered the character: ");
    putchar(ch);
    printf("\n");

    return 0;
}
