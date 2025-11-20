/* Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main(){
	int i,num1,num2,p,c;
	printf("Enter numbers");
	scanf("%d %d",&num1,&num2);
	for(i=2;i<=num1;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
		p=p*i*(num1/i)*(num2/i);
		c++;
	    }
	}
	if(c==0)
	printf(num1*num2);
	else
	printf("%d",p);
	return 0;
}
