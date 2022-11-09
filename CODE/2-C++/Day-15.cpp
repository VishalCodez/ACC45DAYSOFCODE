// C program to find factors of a number using loops


#include <iostream>
using namespace std;

int main()
{
int num;
cout << “\nEnter the number : “;
cin >> num;
int i,count = 0;
cout << “\nThe factors of ” << num << ” are : “;
for(i = 1; i <= num; i++)
{
if(num % i == 0)
{
++count;
cout << i << ” “;
}
}
cout << “\n\nTotal factors of ” << num << “: ” << count << endl;
return 0;
}



//OUTPUT

// Input-
// Enter the number :60
// Output-
// The factors of are 60 :1 2 3 4 5 6 10 12 15 20 30 60
// Total factors of 60:12