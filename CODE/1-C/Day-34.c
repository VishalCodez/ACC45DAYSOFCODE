//C program to convert days in to years, weeks and days

#include <stdio.h>

int main()
{
    int days, years, weeks;

    printf("Enter days: ");
    scanf("%d", &days);

   
    years = (days / 365);   
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);

    return 0;
}

//output

// Enter days: 373
// YEARS: 1
// WEEKS: 1
// DAYS: 1