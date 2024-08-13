/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,j,temp;
    int a[7]={10,2,32,12,11,0,23};
    int n=7;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
    {
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
    }
    printf("The sorted numbers are :\n");
    
for(i=0;i<7;i++)
{
    printf("%d \n",a[i]);
    
}
}