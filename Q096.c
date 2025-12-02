/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char w[100];
    int k=0;
    printf("Enter sentence: ");
   fgets(str, sizeof(str), stdin);
    for(int i=0;i<=strlen(str);i++){
        if(str[i]!= ' ' && str[i] != '\0')
        w[k++]=str[i];
        else{
        for(int j=strlen(w)-1;j>=0;j--)
        printf("%c",w[j]);
        if (str[i] == ' ')
                printf(" ");   // print space between word
                k = 0;     
        }
    }
    return 0;
}