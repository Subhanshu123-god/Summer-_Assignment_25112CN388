/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a[20];
    printf("enter character ");
    gets(a);
    for(int i=0;i<strlen(a)-1;i++){
        if(islower(a[i])){
            a[i]=a[i]-32;
            
        }
    }
    printf("%s",a);



    return 0;
}