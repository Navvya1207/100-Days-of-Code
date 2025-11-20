/*Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
int main(){
    int r,c;
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}