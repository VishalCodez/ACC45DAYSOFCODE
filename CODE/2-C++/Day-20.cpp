// C++ program to generate fibonacci series upto n value

#include<iostream>
using namespace std;
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
cout << "Enter the nth value: ";
cin >> n;
cout << "Fibonacci series: ";
while(sum <= n)
{
cout << sum << " ";
a = b;  // swap elements
b = sum;
sum = a + b;  // next term is the sum of the last two terms 
}
return 0;
}



//OUTPUT

// Input-
// Enter the nth value: 1000
// Output-
// Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987