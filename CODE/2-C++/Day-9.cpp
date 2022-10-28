// C++ program to find the area of a circle

#include <iostream>
#include <math.h>
using namespace std;

float area_of_a_circle(float radius)
{
return M_PI * radius * radius;
}

int main()
{
float area, radius;
cout << “\nEnter the radius of the circle : “;
cin >> radius;
area = area_of_a_circle(radius);
cout << “\nArea of the circle : ” << area <<endl;
return 0;
}


//OUTPUT

// Input-
// Enter the radius of the circle:7
// Output-
// Area of the circle:153.86