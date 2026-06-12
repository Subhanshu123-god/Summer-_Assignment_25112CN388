/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void factorial(int);

int main()
{
    int n;
    printf("enter first number");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
void factorial(int n)
{
    int fact=1,i=1;
    while(n>0){
        fact=fact*n;
        n--;
        
    }
    printf("%d is value after factorial",fact);
        
}
    
        
    
