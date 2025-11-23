/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

    // Check if diagonal elements are distinct
    bool distinct = true;
    for(int i = 0; i < r; i++){
        for(int j = i + 1; j < c; j++){
            if(a[i][i] == a[j][j]) {
                distinct = false;
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}