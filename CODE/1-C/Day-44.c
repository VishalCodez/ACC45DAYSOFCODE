//C program to check prime, armstrong and perfect numbers using functions

#include <stdio.h>
#include <math.h>



int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);


int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    
    
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    
   
    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    
    return 0;
}



/**
 * Check whether a number is prime or not. 
 * Returns 1 if the number is prime otherwise 0.
 */
int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
        /*  
         * If the number is divisible by any number  
         * other than 1 and self then it is not prime 
         */  
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}



/**
 * Check whether a number is Armstrong number or not. 
 * Returns 1 if the number is Armstrong number otherwise 0.
 */
int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = num;

   
    digits = (int) log10(num) + 1;


    while(num > 0)
    {
        lastDigit = num % 10;

        sum = sum + round(pow(lastDigit, digits));

        num = num / 10;
    }
    
    return (originalNum == sum);
}



/**
 * Check whether the number is perfect number or not. 
 * Returns 1 if the number is perfect otherwise 0.
 */
int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
   
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (num == sum);
}

//output 

// Enter any number: 11
// 11 is Prime number.
// 11 is not Armstrong number.
// 11 is not Perfect number.