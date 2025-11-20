/* Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main(){
    char a[100];
    int n;
    printf("Enter size ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}