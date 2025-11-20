/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n + 1];   // +1 because we will insert one extra element

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x;
    printf("Enter element to insert: ");
    scanf("%d", &x);

    int i = n - 1;

    // Shift elements to the right until correct position is found
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }

    // Insert the element
    a[i + 1] = x;
    n++;  // increase size

    // Print final array
    printf("Array after insertion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }

    return 0;
}