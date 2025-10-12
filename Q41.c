/* Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, fD,lD, digits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    lD= num % 10;  
    digits = (int)log10(num);
    fD= num / pow(10, digits);
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;
    swappedNum = lD* pow(10, digits) + middle * 10 + fD;
    printf("%d", swappedNum);
    return 0;
}
