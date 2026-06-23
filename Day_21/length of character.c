/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[8];
    printf("enter character ");
    gets(a);
    int i=0;
    int length=0;
    while(a[i]!='\0'){
        length++;
        i++;
    }
    printf("length is %d",length);

    return 0;
}