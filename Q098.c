/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char w[10][50];   // store up to 10 words
    int wc = 0, k = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';

    // Split into words
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            w[wc][k++] = str[i];
        } 
        else {
            w[wc][k] = '\0'; // end of word
            wc++;
            k = 0;
        }
    }

    // Print initials
    for (int i = 0; i < wc - 1; i++) {
        printf("%c.", w[i][0]);
    }

    // Print last word in full
    printf(" %s", w[wc - 1]);

    return 0;
}