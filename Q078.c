/* Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    int a[100][100];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    bool x=true;
    int sum;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    printf("Sum = %d",sum);
    return 0;
}