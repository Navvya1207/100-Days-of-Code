/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char str1[100];
    char str2[100];
    bool x;
    bool y;
    printf("Enter string: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s",str2);
    for(int i=0;i<strlen(str1);i++)
    {
        for(int j=0;j<strlen(str2);j++){
            if(str1[i]==str2[j]){
            x=true;
            break;
            }
            else
            x=false;
        }
        if(x==true)
        y=true;
        if(x==false)
        break;
    }
    if(y==true)
    printf("Anagrams");
    else
    printf("Not anagrams");
    return 0;
}