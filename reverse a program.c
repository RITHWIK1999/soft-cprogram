/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    
    char a[20];
    
    printf("enter a string");
    scanf("%s",a);
    
        printf("entered string is : %s ",a);
        printf("the reversed string is : %s ",strrev(a));
    
    
    

    return 0;
}