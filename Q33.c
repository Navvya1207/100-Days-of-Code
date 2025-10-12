/* Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
	int n,c=0,rem,orig,num,sum=0;
	printf("Enter number");
	scanf("%d",&num);
	orig=num;
	n=num;
	while(n>0)
	{
		c++;
		n/=10;
		
	}
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+pow(rem,c);;
		num/=10;
	}
	if(orig==sum)
	printf("Armstrong");
	else
	printf("Not Armstrong");
	return 0;
}
