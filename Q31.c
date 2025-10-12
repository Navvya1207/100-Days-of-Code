/* Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main(){
	int place=1,rem,num,binary=0;
	printf("Enter number");
	scanf("%d",&num);
	if (num==0)
	printf("0");
	else 
	{
	while(num>0)
	{
		rem=num%2;
		binary=rem*place+ binary;
		num/=2;
		place*=10;
	}
	printf("%d",binary);
}
	return 0;

}
