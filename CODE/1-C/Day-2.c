// C program to check if the character is a vowel or consonant using switch case

#include <stdio.h>

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
case ‘U’: printf(“Vowel\n”);
break;
default : printf(“Consonant\n”);
}
}

int main()
{
char ch;
printf(“\nInput a character : “);
scanf(” %c”,&ch);
printf(“\n%c is a “,ch);
vowel_or_consonant(ch);
return 0;
}

//OUTPUT

// Input-
// Input a character: U
// Output-
// U is Vowel