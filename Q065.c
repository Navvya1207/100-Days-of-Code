/* Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements of sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int foundIndex = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            foundIndex = mid;
            break;
        } 
        else if (key < a[mid]) {
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }

    if (foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("-1\n");

    return 0;
}