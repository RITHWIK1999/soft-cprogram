/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    int len=0,i;
    printf("Enter a string : ");
    scanf("%s",str);

    while (str[len]!='\0')
    {
        len++;
    }

    for (i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}