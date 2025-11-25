/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++)
    {
    if(str[i]!='a'&& str[i]!='e'&& str[i]!='i' && str[i]!='o' && str[i]!='u')
    printf("%c",str[i]);
    else
    continue;
    }
    return 0;
}