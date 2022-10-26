// C program to check whether a given character is upper case, lower case, number or special character 

#include
int main()
{
	char ch;
	scanf(“%c”,&ch);
	if(ch >= 65 && ch <= 90)
		printf(“Upper”);
	else if(ch >= 97 && ch <= 122)
		printf(“Lower”);
	else if(ch >= 48 && ch <= 57)
		printf(“Number”);
	else
		printf(“Symbol”);
return 0;
}

//OUTPUT

// @

// Symbol