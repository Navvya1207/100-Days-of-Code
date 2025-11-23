/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    int a[100][100];
    int b[100][100];
    printf("Enter row and columns of matrix 1: ");
    scanf(" %d %d",&r1,&c1);
    printf("Enter matrix 1:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
        scanf(" %d",&a[i][j]);
    }
    printf("Enter row and columns of matrix 2: ");
    scanf(" %d %d",&r2,&c2);
    printf("Enter matrix 2 \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
        scanf(" %d", &b[i][j]);
    }
    printf("Sum matrix: \n ");
    int c[100][100];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
         printf(" %d",c[i][j]);
     }
        printf("\n");
    }
    return 0;
    }