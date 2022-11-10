// C++ program to reverse a number

#include <iostream>
using namespace std;

int main()
{
int n, rev = 0, rem;
cout << “\nEnter a number : “;
cin >> n;
cout << “\nReversed Number : “;
while(n != 0)
{
rem = n%10;
rev = rev*10 + rem;
n /= 10;
}

cout << rev << endl;

return 0;
}

//OUTPUT

// Enter a number : 12345

// Reversed Number : 54321