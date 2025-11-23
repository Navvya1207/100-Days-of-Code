/*Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <string.h>
int main(){
    int v=0,c=0;
   
    char str[100];
    char vo[10]={'a','e','i','o','u','A','E','I','O','U'};
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++){
         int x=0;
        for(int j=0;j<10;j++){
        if(str[i]==vo[j]){
            x=1;
            break;
        }
        }
        if(x)
        v++;
        else
        c++;
    }
    printf("Vowels= %d \n",v);
    printf("Consonants= %d",c);
    return 0;
}