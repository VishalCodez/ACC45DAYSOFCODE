// Program to find area of a circle using pointers


#include <iostream>
#include <math.h>
using namespace std;

double area_of_circle(double *radius)
{
return M_PI * (*radius) * (*radius);
}

int main()
{
double radius;

cout << “\nEnter the radius of Circle : “;
cin >> radius;
cout << “\nArea of Circle : ” << area_of_circle(&radius);
return 0;
}

//OUTPUT


// Input-
// Enter the radius of the circle:7
// Output-
// Area of the circle:153.86