/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float length ,width , area ,perimeter;
  printf("Enter the length of the rectangle:");
  scanf("%f", &length);
  
  printf("Enter the width of the retangle:");
  scanf("%f", &width);
  
  area = length * width;
  perimeter = 2 * ( length + width);
  
  printf( "area of the rectangle= %.2f\n",area);
  printf(" perimeter of the rectangle = %.2f\n", perimeter);
  
  return 0;
  
}
    