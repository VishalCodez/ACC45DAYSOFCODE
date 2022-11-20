//C program to find perimeter of rectangle


#include <stdio.h>

int main()
{
    float length, width, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

  
    perimeter = 2 * (length + width);

    
    printf("Perimeter of rectangle = %f units ", perimeter);

    return 0;
}

//output

// Enter length of the rectangle: 5
// Enter width of the rectangle: 10
// Perimeter of rectangle = 30.000000