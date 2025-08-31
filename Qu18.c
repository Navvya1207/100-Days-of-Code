/* Q18: Write a program to assign grades based on a percentage input.
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/
#include <stdio.h>
int main(){
	int m;
	printf("Enter marks percentage");
	scanf("%d",&m);
	if(m>=90)
	printf("Grade A");
	else if(m>=80 && m<90)
	printf("Grade B");
	else if(m>=70 && m<80)
	printf("Grade C");
	else if(m>=60 && m<70)
	printf("Grade D");
	else
	printf("Grade F");
	return 0;
}

