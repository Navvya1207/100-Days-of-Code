/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++)
    {
            for(int j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
            printf("%c",str[i]);
            return 0;
            }
    }
}
printf("No repeating character");
return 0;
}