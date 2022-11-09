// Program to find the factorial of a number using recursion

#include <iostream>
using namespace std;
int factorial_of_a_number(int n)
{
if(n == 0)
return 1;
else
return (n * factorial_of_a_number(n-1));
}
int main()
{
int n;
cout << "Enter the number : ";
cin >> n;
if(n < 0)
cout << "Invalid input";
else
cout << "Factorial of the number " << n << " is " << factorial_of_a_number(n);
return 0;
}



//OUTPUT

// Input-
// Enter the number:5
// Output-
// Factorial of the number 5 is 120