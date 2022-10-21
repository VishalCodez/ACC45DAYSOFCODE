//QUESTION - c++ program to check vowel or consonant using if else

#include
using namespace std;

void vowel_or_consonant(char ch)
{
if (ch == ‘a’ || ch == ‘e’ || ch == ‘i’ || ch == ‘o’ || ch == ‘u’ || ch == ‘A’ || ch == ‘E’ || ch == ‘I’ || ch == ‘O’ || ch == ‘U’)
cout << “Vowel” << endl;
else
cout << “Consonant” << endl;
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
// Enter a character:M
// Output-
// M is Consonants