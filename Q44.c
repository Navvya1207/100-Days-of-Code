/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/
#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;  
    float num = 1, den=0; 

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
    	if (i==1)
    	den=1;
    	else if(i==2)
    	den=4;
    	else
    	den = den + 2; 
    	
        sum = sum + (num / den);  
        num = num + 2;            
           
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
	
}
