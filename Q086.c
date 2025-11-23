/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
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
    bool x;
    for(int i=0;i<strlen(str);i++)
    if(str[i]==rev[i])
    x=true;
    else{
    x=false;
    break;
    }
    if(x)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}