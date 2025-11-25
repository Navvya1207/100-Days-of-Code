/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);   // allows spaces

    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    for (int i = 0; i <= strlen(str); i++) {

        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            // Counting letters of current word
            currLen++;
        } else {
            // Word ended → check if it's longest
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;   // next word starts here
        }
    }

    // Print the longest word
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}