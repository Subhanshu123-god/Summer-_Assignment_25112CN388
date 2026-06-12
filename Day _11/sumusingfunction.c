/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void add(int,int);

int main()
{
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter secound number");
    scanf("%d",&b);
    add(a,b);
    return 0;
}
void add(int a,int b){
    int sum;
    sum=a+b;
    printf("sum is%d",sum);
}