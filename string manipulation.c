/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()

{
    char str,ch;
printf("enter a string");
scanf("%s",&str);
printf("enter the ch wants to be deleted");
scanf("%s",&ch);
strcmp(str,ch);


printf("%s",str);

    return 0;
}