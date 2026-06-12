/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<math.h>
#include <stdio.h>
void armstrong(int);

int main()
{
    int n;
    printf("enter first number");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
void armstrong(int n)
{
    int a=0,b=1,c=0;
    while(c<n){
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
        
    }
    
    
        
}
    
        
    
