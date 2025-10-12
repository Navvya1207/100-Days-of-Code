/* Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
	int num,f,i;
	printf("Enter number");
	scanf("%d",&num);
	for( i=1;i<=num;i++)
	{
		if(num%i==0)
		f++;
	}
	if(f==2)
	printf("Prime");
	else
	printf("Not prime");
	return 0;
}
