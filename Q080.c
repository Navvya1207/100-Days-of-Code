/*Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[100][100], b[100][100], result[100][100];

    printf("Enter size of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter matrix 1: ");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter size of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter matrix 2:");
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // Check if multiplication possible
    if(c1 != r2){
        printf("Matrix multiplication not possible");
        return 0;
    }

    // Initialize result matrix to 0
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
