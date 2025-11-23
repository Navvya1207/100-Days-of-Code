/*Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
int main(){
    int space=0,d=0,s=0;
    char str[100];
    printf("Enter string:");
    fgets(str, sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++)
    if(str[i]==' ')
    space++;
    else if(str[i]>='0' && str[i]<='9')
    d++;
    else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    continue;
    else if(str[i] !='\n')
    s++;
    printf("Spaces=%d, Digits=%d, Special=%d",space,d,s);
    return 0;
}