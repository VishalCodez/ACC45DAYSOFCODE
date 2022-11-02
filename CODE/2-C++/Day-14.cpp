// C++ program to find largest among three numbers using nested if

#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << “Enter three numbers : “;
cin >> a >> b >> c;
int max = 0;
if(a > b && a > c)
cout << “The largest among the three numbers is ” << a;
else if(b > a && b > c)
cout << “The largest among the three numbers is ” << b;
else
cout << “The largest among the three numbers is ” << c;
cout << endl;
return 0;
}
//OUTPUT

// Enter three numbers : 3 5 7
// The largest among the three numbers is 7