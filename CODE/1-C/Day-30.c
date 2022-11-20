//C program to calculate diameter, circumference and area of circle

#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units ", area);

    return 0;
}

//output

// Enter radius of circle: 10
// Diameter of circle = 20.00 units
// Circumference of circle = 62.79 units
// Area of circle = 314.00 sq. units