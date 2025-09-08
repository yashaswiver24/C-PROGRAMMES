/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[50];
    int age;
    
    printf("Enter your name:");
    scanf("%s", name);
    
    printf("Enter your age:");
    scanf( "%d", age);
    
    printf("Hello %s! You are %d years old.\n", name , age);

    return 0;
}