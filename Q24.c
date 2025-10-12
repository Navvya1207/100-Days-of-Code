/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at Rs.5/unit 
Next 100 units at Rs.7/unit 
Next 100 units at Rs.10/unit 
Above at Rs.12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: Rs.250

Input 2:
150
Output 2:
Bill: Rs.850

Input 3:
250
Output 3:
Bill: Rs.1700
*/
#include <stdio.h>
int main(){
	int u,bill;
	printf("Enter units");
	scanf("%d",&u);
	if(u<100)
	bill=u*5;
	else if(u<200)
	bill=(100*5)+(u-100)*7;
	else if(u<300)
	bill=(100*5)+(100*7)+(u-200)*10;
	else
	bill=(100*5)+(100*7)+(100*10)+(u-300)*12;
	
	printf("Electricity Bill = Rs. %d",bill);
    return 0;
}
