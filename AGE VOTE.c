/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int age ;
   printf("Enter age : ");
   scanf("%d", &age);
   if (age>=18)
   {
       printf( "Eligible to Vote");
       
   }
       else
        {
           if (age < 0)
           {
               printf ("Invalid Age");
           }
              else
              {
                  printf("NOT ELIGIBLE TO VOTE" );
              }
        }
    return 0;
}