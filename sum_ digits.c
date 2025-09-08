/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int num , d1 ,d2, d3, d4, sum ;
  printf("Enter a four digit number:");
  scanf("%d",&num);
  
  d1 = num %  10;
  num = num / 10;
  
  
  d2 = num % 10;
  num = num /10;
  
  d3= num % 10;
  num =num/10 ;
  
  sum = d1 + d2 + d3 +d4 ;
  printf("The sum of digits is :%d\n",sum);
  
  
  return 0;
  
}
    