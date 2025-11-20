/* Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>
int main(){
	int num=0,i,p=1,rem=0,n,rev=0,l;
	printf("Enter number");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
    }
    
    while(n>0)
	{
		rem=n%10;
		if(rem%2!=0)
		p=p*rem;
	    n/=10;
	}
	
	if(p==1)
	printf("1 (no odd digits, assume 1)");
	else
	{
	printf("%d ",p);
	
	printf(" (");
    for(i=1;rev>0;rev/=10,i++)
    {
    	l=rev%10;
    	if(i==1)
    	{
         if(l%2!=0)
    	 printf("%d",l);
        }
    	else
    	{
         if(l%2!=0)
    	 printf("*%d",l);
		}
	}
	printf(")");
    }
	return 0;
}
