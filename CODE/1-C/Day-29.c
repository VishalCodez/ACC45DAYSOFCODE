//C program to find area of rectangle

#include <stdio.h>

int main()
{
    float length, width, area;

   
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    /* Calculate area of rectangle */
    area = length * width;

   
    printf("Area of rectangle = %f sq. units ", area);

    return 0;
}

//output

// Enter length of rectangle: 5
// Enter width of rectangle: 10
// Area of rectangle = 50.000000 sq. units