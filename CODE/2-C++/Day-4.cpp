int main()
{
	//Fill the code
	char ch;
	cin >> ch;
	if(ch >= 65 && ch <= 90)
		cout << “Upper”;
	else if(ch >= 97 && ch <= 122)
		cout << “Lower”;
	else if(ch >= 48 && ch <= 57)
		cout << “Number”;
	else
		cout << “Symbol”;
	return 0;
}

//OUTPUT

// @

// Symbol.