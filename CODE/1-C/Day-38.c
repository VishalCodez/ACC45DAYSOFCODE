//C program to find area of a triangle if base and height are given


#include <stdio.h>

int main()
{
    float base, height, area;


    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);


    area = (base * height) / 2;


    printf("Area of the triangle = %.2f sq. units", area);

    return 0;
}

//output

// Enter base of the triangle: 10
// Enter height of the triangle: 15
// Area of the triangle = 75.00 sq. units