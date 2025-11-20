/* Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n + 1]; 
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int pos, x;
    printf("Enter position and element: ");
    scanf("%d %d", &pos, &x);

    for (int i = n - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }

    a[pos] = x;

    n++; 

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}