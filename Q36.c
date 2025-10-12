/* Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(){
	int rem,a,b;
	printf("Enter numbers");
	scanf("%d %d",&b,&a);
	while(a%b!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}
	printf("%d",b);
	return 0;
	}
