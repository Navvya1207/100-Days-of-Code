/* Q30: Write a program to reverse a given number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include <stdio.h>
int main(){
	int n,num;
	printf("Enter n");
	scanf("%d",&n);
	for(;n!=0;n=n/10)
	{
		num=n%10;
		printf("%d",num);
	}
	
	return 0;
}
