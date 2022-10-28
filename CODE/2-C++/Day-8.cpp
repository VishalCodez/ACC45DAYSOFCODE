// C++ program to find the greatest among three numbers using the conditional operator

#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Enter three numbers : ";
cin >> a >> b >> c;
int max = 0;
max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : ((c>a)&&(c>b)?c:a);
cout << "The largest among the three numbers is " << max;
cout << endl;
return 0;
}

//OUTPUT 

// Enter three numbers : 3 5 7

// The largest among the three numbers is 7