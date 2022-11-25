//C program to find all angles of a triangle if two angles are given


#include <stdio.h>

int main()
{
    int a, b, c;


    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);


    c = 180 - (a + b);


    printf("Third angle of the triangle = %d", c);

    return 0;
}

//output

// Enter two angles of triangle: 60 30
// Third angle of the triangle = 90