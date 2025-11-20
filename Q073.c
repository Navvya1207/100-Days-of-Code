/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
        printf("%d ",sum);
        sum=0;
    }
    return 0;
}
