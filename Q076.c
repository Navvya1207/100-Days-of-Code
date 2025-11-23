/*Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#include <stdbool.h>
int main(){
     int r,c,sum=0;
    int a[100][100];
    int b[100][100];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            b[i][j]=a[j][i];
    }
    bool x=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(a[i][j]!=b[i][j])
        x=false;
        break;
        }
    }
    if(x==true)
    printf("True");
    else
    printf("False");
    return 0;
}