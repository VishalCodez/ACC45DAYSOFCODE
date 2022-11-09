// Program to find the factorial of a number using tgamma function


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n, res;
cout << "Enter the number : ";
cin >> n;
res = tgamma(n + 1); 
cout << "Factorial of the number " << n << " is " << res;
}


//OUTPUT

// Input-
// Enter the number:5
// Output-
// Factorial of the number 5 is 120