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
    char a[50];
    printf("enter number");
    gets(a);
    int count=1;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            count++;
        }
    }
    printf("count:%d",count);
    

    return 0;
}