/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int n){
    int f=1;
    if(n==0 ||n==1){
        return 1;
    }
    else
    {
        return n*fact(n-1);
        
        
    }
    
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int a=fact(n);
    printf("%d",a);

    return 0;
}