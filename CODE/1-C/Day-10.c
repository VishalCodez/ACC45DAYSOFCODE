//Program to find area of a circle using pointers

#include <stdio.h>
#include <math.h>

float area_of_circle(float *radius)
{
return M_PI * (*radius) * (*radius);
}

#include<stdio.h>

int main()
{
float radius;

printf(“\nEnter the radius of Circle : “);
scanf(“%f”, &radius);
printf(“\nArea of Circle : %f”, area_of_circle(&radius));

return (0);
}


//OUTPUT 

// Input-
// Enter the radius of the circle:7
// Output-
// Area of the circle:153.86