// GCD of two numbers

#include<iostream>
using namespace std;
int main()
{
int a,b,gcd;
cout <<“\nEnter two numbers : “;
cin >> a >> b;
int i;
for(i = 1; i <= a && i <= b; i++)
{
if((a % i == 0) && (b % i == 0))
{
gcd = i;
}
}
cout << “\nGCD of “<< a << ” and ” << b << ” is ” << gcd;
cout << endl;
return 0;
}



//OUTPUT

// Input-
// Enter two numbers:20 28
// Output-
// GCD of 4