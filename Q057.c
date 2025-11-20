/* Q57: Find the sum of array elements.
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main(){
	int sum,n,i;
	printf("Enter size");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}

