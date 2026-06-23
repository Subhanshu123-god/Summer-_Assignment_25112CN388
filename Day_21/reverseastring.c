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
    printf("enter character ");
    gets(a);
    int j=0;
    char b[20];
    for(int i=strlen(a)-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("%s",b);



    return 0;
}