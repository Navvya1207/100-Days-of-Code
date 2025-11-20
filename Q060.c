/* Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main(){
	int p=0,n=0,z=0,i,s;
	printf("Enter size");
	scanf("%d",&s);
	int arr[s];
	
	for(i=0;i<s;i++)
	scanf("%d",&arr[i]);
	
	for( i=0;i<s;i++)
	{
		if(arr[i]>0)
		p++;
		else if(arr[i]<0)
		n++;
		else
		z++;
	}
	printf("Positive= %d, Negative= %d, Zero= %d",p,n,z);
	return 0;
}

