//C program to convert centimeter into meter and kilometer


#include <stdio.h>

int main()
{
    float cm, meter, km;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km", km);

    return 0;
}

//output

// Enter length in centimeter: 1000
// Length in Meter = 10.00 m
// Length in Kilometer = 0.01 km