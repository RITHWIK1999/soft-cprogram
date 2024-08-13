/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n[10],a,i;
    printf("enter the elements :");
    for(i=0;i<10;i++)
    {
    scanf("%d",&n[i]);
    }
    printf("enter the number want's to be searched");
    scanf("%d",&a);
    for(i=0;i<10;i++)
    {
    if(n[i]==a)
    {
    printf("%d found in %d",a,i);
    }
    }
    return 0;
    
}   