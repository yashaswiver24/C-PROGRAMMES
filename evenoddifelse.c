/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int x ;
   printf("Enter a number : ");
   scanf("%d", &x);
   if (x%2==0)
   {
       printf( "the number %d is even",x );
       
   }
       else
        {
            printf ("number is odd");
        }
    return 0;
}