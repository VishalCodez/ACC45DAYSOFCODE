
//C program to demonstrate input output of primitive data types
 
#include <stdio.h>

int main()
{

    char charVal;
    unsigned char uCharVal;
    
    short shortVal;
    unsigned short uShortVal;
    
    int intVal;
    unsigned int uIntVal;
    
    long longVal;
    unsigned long uLongVal;
    
    long long longLongVal;
    unsigned long long uLongLongVal;
    
    float floatVal;
    double doubleVal;
    long double longDoubleVal;
    
  
    printf("Enter a character: ");
    charVal = getchar();
    getchar(); 
    
    printf("Enter another character: ");
    uCharVal = getchar();
    getchar(); 

    printf("Enter a signed short value: ");
    scanf("%hi", &shortVal);
    
    printf("Enter an unsigned short value: ");
    scanf("%hu", &uShortVal);
    
    printf("Enter an signed integer value: ");
    scanf("%d", &intVal);
    
    printf("Enter an unsigned integer value: ");
    scanf("%lu", &uIntVal);
    
    printf("Enter a signed long value: ");
    scanf("%ld", &longVal);
    
    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongVal);
    
    printf("Enter a signed long long value: ");
    scanf("%lld", &longLongVal);
    
    printf("Enter an unsigned long long value: ");
    scanf("%llu", &uLongLongVal);
    
    printf("Enter a float value: ");
    scanf("%f", &floatVal);
    
    printf("Enter a double value: ");
    scanf("%lf", &doubleVal);
    
    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleVal);
    
    

    printf("\nYou entered character: '%c' \n", charVal);
    printf("You entered unsigned character: '%c' \n\n", uCharVal);
    
    printf("You entered signed short: %hi \n", shortVal);
    printf("You entered unsigned short: %hu \n\n", uShortVal);
    
    printf("You entered signed int: %d \n", intVal);
    printf("You entered unsigned int: %lu \n\n", uIntVal);
    
    printf("You entered signed long: %ld \n", longVal);
    printf("You entered unsigned long: %lu \n\n", uLongVal);
    
    printf("You entered signed long long: %lld \n", longLongVal);
    printf("You entered unsigned long long: %llu \n\n", uLongLongVal);
    
    printf("You entered float: %f \n", floatVal);
    printf("You entered double: %lf \n", doubleVal);
    printf("You entered long double: %Lf \n", longDoubleVal);

    return 0;
}

//output

// Enter a character: C
// Enter another character: P
// Enter a signed short value: -32768
// Enter an unsigned short value: 65535
// Enter an signed integer value: -2147483648
// Enter an unsigned integer value: 4294967295
// Enter a signed long value: -2147483648
// Enter an unsigned long value: 4294967295
// Enter a signed long long value: -9223372036854775808
// Enter an unsigned long long value: 18446744073709551615
// Enter a float value: 1.28766
// Enter a double value: 10.915074
// Enter a long double value: 100.12345

// You entered character: 'C'
// You entered unsigned character: 'P'

// You entered signed short: -32768
// You entered unsigned short: 65535

// You entered signed int: -2147483648
// You entered unsigned int: 4294967295

// You entered signed long: -2147483648
// You entered unsigned long: 4294967295

// You entered signed long long: -9223372036854775808
// You entered unsigned long long: 18446744073709551615

// You entered float: 1.287660
// You entered double: 10.915074
// You entered long double: 100.123450