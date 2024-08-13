/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the array size ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements ");

    for (int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the  elements are ");

    for (int i=0;i<n;i++) 
    {
        if (i%2==0) 
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}