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
    char str[100];
    char ch;
    int count=0,i;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to count:");
    scanf("%c",&ch);
    for (i=0;i<strlen(str);i++) 
    {
        if(str[i]==ch) 
        {
            count++;
        }
    }
    printf("The character %c occurs %d times in the string.\n",ch,count);


    return 0;
}