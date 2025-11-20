/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main(){
    int n;
    char a[100];
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int secmax=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            secmax=max;
            max=a[i];
            
        }
    }
    printf("%d",secmax);
    return 0;
}