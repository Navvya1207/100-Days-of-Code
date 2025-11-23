/* Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0; i<strlen(str) ; i++)
    {
        printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}