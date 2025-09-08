/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int x;
  
  x = 5;
  
  printf("Initial value of x = %d\n",x);
  printf("Using post-increment(x++):%d\n", x++);
  printf("Value of x after post -increment = %d\n\n",x);
  
  x= 5;
  printf("Intial Value of x= %d\n",x);
  printf("Using pre-increment (++x):%d\n", ++x);
  printf("Value of x after pre -increment = %d\n", x);
  
  
  
  return 0;
  
}
    