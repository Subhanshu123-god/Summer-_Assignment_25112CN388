/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void maximum(int,int);

int main()
{
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter secound number");
    scanf("%d",&b);
    maximum(a,b);
    return 0;
}
void maximum(int a,int b)
{
    if(a>b){
    printf("max is %d",a);
    }
    else{
        printf("max is %d",b);
    }
}