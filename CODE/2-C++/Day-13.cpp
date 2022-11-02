// GCD of two numbers using recursion

#include <iostream>
using namespace std;

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
cout << “Enter two numbers: “;
cin >> a >> b;
cout << “\nGCD of ” << a << ” and ” << b << ” is ” << gcd(a,b);
cout << endl;
return 0;
}




//OUTPUT

// Input-
// Enter two numbers:20 28
// Output-
// GCD of 4