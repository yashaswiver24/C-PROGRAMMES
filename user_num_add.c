/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1 , num2 , sum;
    
    
    printf("Enter first number:");
    scanf("%d", &num1);
    
    printf("Enter second number:");
    scanf( "%d", &num2);
    
    sum = num1 + num2;
    printf("the sum of %d and %d is %d\n", num1, num2,sum);

    return 0;
}