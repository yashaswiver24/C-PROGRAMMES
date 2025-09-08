/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float celsius , fahrenheit;
  printf("Enter temperature in celsius:");
  scanf("%f", &celsius);
   
   fahrenheit= (celsius*9/5) + 32;
  printf("%.2f Celsius= %.2f fahrenheit\n" , celsius , fahrenheit);
  
  return 0;
  
}
    