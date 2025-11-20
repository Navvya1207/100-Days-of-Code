/*Q43: Write a program to check if a number is a strong number.
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
	int i,rem,num,sum=0,f=1;
	printf("Enter number");
	scanf("%d",&num);
	int n=num;
	while(n!=0)
	{
	rem=n%10;
	f=1;
	for(i=1;i<=rem;i++)
	f=f*i;
	n/=10;
	sum=sum+f;
    }
	
	
	if(sum==num)
	printf("Strong number");
	else
	printf("Not strong number");
}
