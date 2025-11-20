/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main(){
    char a[100],b[100];
    int s1,s2;
    printf("Enter size of array 1: ");
    scanf("%d",&s1);
    printf("Enter array 1 elements: ");
    for(int i=0;i<s1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of array 2: ");
    scanf("%d",&s2);
    printf("Enter array 2 elements: ");
    for(int j=0;j<s2;j++){
        scanf("%d",&b[j]);
    }
    int c [s1 + s2];
    int k = 0;
    for(int i = 0; i < s1; i++) {
        c[k++] = a[i]; 
    }
    for(int i = 0; i < s2; i++) {
        c[k++] = b[i];
    }
    for(int i= 0; i < s1 + s2; i++) 
        printf("%d ", c[i]);
    return 0;
}