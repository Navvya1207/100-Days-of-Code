/* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main(){
   int i,j,n=1;
   for(i=1;i<=5;i++)
    {
   	for(j=1;j<=n;j++)
   	printf("*");
    n=n+2;
   	printf("\n");
	}
   
   n=7;
   for(i=1;i<=5;i++)
   {
   	for(j=n;j>=1;j--)
   	printf("*");
    n=n-2;
   	printf("\n");
   }
   return 0;
}
