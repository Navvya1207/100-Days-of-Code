/* Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main(){
    int n,x,a[100];
    printf("Enter number of elements to input");
    scanf("%d",&n);
    printf("Enter elements of array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element to search");
    scanf("%d",&x);
    for(int j=0;j<n;j++)
    {
        if(a[j]==x)
        {
        printf("Found at index %d",j);
        return 0;
        }
    }
    printf("-1");
    return 0;
}