/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main(){
    int r,c,sum=0;
    int a[100][100];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }    
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}