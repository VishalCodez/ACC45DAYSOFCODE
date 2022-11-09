// Program to find the factorial of a number using functions


#include <iostream>
using namespace std;
int factorial_of_a_number(int n)
{
int fact = 1, i;
if(n == 0)
return 1;
else
for(i = 1; i <= n; i++)
{
fact = fact * i;
}
return fact;
}
int main()
{
int n;
cout << "Enter the number : ";
cin >> n;
if(n < 0)
cout << "Invalid output";
else
cout << "Factorial of the number " << n << " is " << factorial_of_a_number(n);
return 0;
}


//OUTPUT

// Input-
// Enter the number:5
// Output-
// Factorial of the number 5 is 120