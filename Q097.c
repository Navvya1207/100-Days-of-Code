/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

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
        if(str[i]!=' ' && str[i] != '\0') 
        w[k++]=str[i];
        else{
            printf("%c",w[0]);
            printf(".");
            k=0;
        }
    }
    return 0;
}