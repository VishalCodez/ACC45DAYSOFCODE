// Program to count number of digits in an integer using a loop


#include <iostream>
using namespace std;
int main()
{
int n;
int count = 0;
cout << “\nEnter the number: “;
cin >> n;
while(n != 0)
{
n = n/10;
++count;
}
cout << “\nNumber of digits: ” << count << endl;
}


//OUTPUT

// Input-
// Enter the number:1 2 3 4 5 6
// Output-
// Number of digits:6