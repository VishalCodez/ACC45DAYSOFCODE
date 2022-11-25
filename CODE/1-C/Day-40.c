//C program to calculate total, average and percentage of five subjects


#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;

    
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

   
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}

//output

// Enter marks of five subjects: 
// 95
// 76
// 85
// 90
// 89
// Total marks = 435.00
// Average marks = 87.00
// Percentage = 87.00