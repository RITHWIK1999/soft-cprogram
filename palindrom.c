/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b;
printf("enter a word");
scanf("%s",&a);
printf("the length of string",strlen(a));
scanf("%s",&b);
strrev(b,a);
if(strcmp(a,b)==0)
{
printf("the function is palindrom");
}
else
{
printf("the function is not palindrom");
}
return 0;
}
