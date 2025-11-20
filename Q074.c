/*Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
         printf("%d ",a[j][i]);            
        }
        printf("\n");
    }
    return 0;
}