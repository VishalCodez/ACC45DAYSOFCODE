// Program to check if the number is odd or even using bitwise (&) operator

#include <stdio.h>

int isEven(int n)
{
return (!(n & 1));
}

int main()
{
int n;
printf(“\nEnter a number : “);
scanf(“%d”,&n);
printf(“\n”);
printf(“\n%d is “,n);
isEven(n) ? printf(“Even\n”) : printf(“Odd\n”);

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