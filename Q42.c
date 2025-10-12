#include <stdio.h>
int main()
{
	int num,i;
	int sum = 0;
	printf("Enter number");
    scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(sum==num)
	printf("Perfect Number");
	else
	printf("Not a perfect number");
}
