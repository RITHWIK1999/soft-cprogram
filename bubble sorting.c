/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,j,temp;
    int a[10]={20,25,9,4,81,102,34,56,78,65};
    int n=10;
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
    
for(i=0;i<10;i++)
{
    printf("%d \n",a[i]);
    
}
}