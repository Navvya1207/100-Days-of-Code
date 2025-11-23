/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char rev[100];
    printf("Enter string: ");
    scanf("%s",str);
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    printf("Reverse string: ");
    for(int i=0;i<strlen(str);i++)
    printf("%c",rev[i]);
    return 0;
}