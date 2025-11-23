/* Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);   // reads a single word

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);   // lowercase → uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + 32);   // uppercase → lowercase
        else
            printf("%c", str[i]);        // other characters unchanged
    }

    return 0;
}