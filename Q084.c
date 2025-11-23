/*Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
int main(){
    char str[100];
    int x;
    int f;
    printf("Enter string: ");
    scanf("%s",str);
    for(int i=0;str[i]!= '\0';i++){
        if(str[i]>='a'&& str[i]<='z')
        printf("%c",str[i]-32);
        else
        printf("%c",str[i]);
    }
    return 0;
}