// Program to find the factorial of a number using tgamma function


#include<stdio.h>
#include<math.h>
int main()
{
int n, res;
printf("Enter the number : ");
scanf("%d", &n);
res = tgamma(n + 1); 
printf("Factorial of the number %d is %d", n, res);
}


//OUTPUT

// Input-
// Enter the number:5
// Output-
// Factorial of the number 5 is 120