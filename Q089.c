/* Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char a;
    int c=0;
    printf("Enter string:");
    scanf("%s",str);
    printf("Enter character to find: ");
    scanf(" %c",&a);
    for(int i=0;i<strlen(str);i++){
        if(a==str[i])
        c++;
    }
    printf("%d",c);
    return 0;
}