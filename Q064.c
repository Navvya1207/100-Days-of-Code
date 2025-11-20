/* Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    int digits[20]; // store digits of number
    int size = 0;

    // Step 1: Extract digits and store in array
    while (n > 0) {
        digits[size] = n % 10;
        size++;
        n /= 10;
    }

    int freq[10] = {0};

    // Step 2: Count frequencies using digit array
    for (int i = 0; i < size; i++) {
        freq[digits[i]]++;
    }

    // Step 3: Find digit with maximum frequency
    int maxDigit = 0, maxFreq = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}