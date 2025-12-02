/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Extract dd, mm, yyyy
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month number to month abbreviation
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    int m = (month[0] - '0') * 10 + (month[1] - '0');   // convert "04" → 4

    // Print output
    printf("%s-%s-%s", day, months[m - 1], year);

    return 0;
}
