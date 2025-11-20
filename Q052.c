/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int i, j, n;
    for (i = 1; i <= 5; i++)
    {
        if (i == 1)
            n = 1;
        else if (i == 2)
            n = 3;
        else if (i == 3)
            n = 5;
        else if (i == 4)
            n = 3;
        else
            n = 1;

        for (j = 1; j <= n; j++)
            printf("*\n");

        if (i != 5)
            printf("\n");
    }

    return 0;
}
