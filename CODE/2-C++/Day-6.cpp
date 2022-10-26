// Program to check if the number is odd or even using bitwise (&) operator


return (!(n & 1));
}

int main()
{
int n;
cout << “\nEnter a number : “;
cin >> n;
cout << endl;
cout << n << ” is “;
isEven(n) ? cout << “Even” : cout << “Odd”;
cout << endl;
return 0;
}

//OUTPUT

// Input-
// Enter a number:564
// Output-
// 564 is Even

// Input-
// Enter a number:255
// Output-
// 255 is Odd