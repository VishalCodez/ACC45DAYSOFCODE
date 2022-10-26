// C++ program to check vowel or consonant using switch  case


#include <iostream>
using namespace std;

void vowel_or_consonant(char ch)
{
switch(ch)
{
case ‘a’:
case ‘A’:
case ‘e’:
case ‘E’:
case ‘i’:
case ‘I’:
case ‘o’:
case ‘O’:
case ‘u’:
case ‘U’: cout << “Vowel” << endl;
break;
default : cout << “Consonant” << endl;
}

}

int main()
{
char ch;
cout << “\nInput a character : “;
cin >> ch;
vowel_or_consonant(ch);
return 0;
}

//OUTPUT


// Input-
// Input a character: U
// Output-
// U is Vowel.