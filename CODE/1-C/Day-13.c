// GCD of two numbers using recursion

#include <stdio.h>

int gcd(int a, int b)
{
if (b != 0)
return gcd(b, a % b);
else
return a;
}

int main()
{
int a, b;
printf(“Enter two numbers: “);
scanf(“%d %d”, &a, &b);

printf(“\nGCD of %d and %d is %d\n”, a, b, gcd(a,b));
return 0;
}


//OUTPUT

// Input-
// Enter two numbers:20 28
// Output-
// GCD of 4