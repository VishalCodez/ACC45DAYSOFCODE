// Program to generate Fibonacci series upto n value using Recursive method


#include<stdio.h>
int Fibonacci(int n)
{
if (n <= 1) 
return n; 
return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
int main()
{
int n, sum = 0;
printf("Enter the nth value: ");
scanf("%d", &n);
printf("Fibonacci series: ");
while(Fibonacci(sum) <= n)
{
printf("%d ", Fibonacci(sum));
sum++;
}
}


//output

// Input-
// Enter the nth value: 1000
// Output-
// Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987