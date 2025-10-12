/* Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
/* Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/
/* Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>
int main(){
    int num, rem, rev = 0;
    int len = 0;

    printf("Enter binary number");
    scanf("%d", &num);

    int temp = num;

    
    while(temp > 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
        len++;
    }

   
    while(len > 0){
        rem = rev % 10;
        if(rem == 0)
            printf("1");
        else if(rem == 1)
            printf("0");
        else {
            printf("Invalid binary number\n");
            return 0;
        }
        rev /= 10;
        len--;
    }

    
    return 0;
}

