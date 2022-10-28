// C program to find the largest among three numbers in C using the conditional operator

#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers : ");
scanf("%d %d %d", &a,&b,&c);
int max = 0;
max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : ((c > a) && (c > b))?c:a;
printf("The largest among the three numbers is %d", max);
printf("\n");
return 0;
}

//OUTPUT

// Enter three numbers : 3 5 7

// The largest among the three numbers is 7