/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }   
        
    }
    if(sum==n && n>0)
    {
        printf("number is a perfect number ");
    }    
    
    else
    {
        printf("number is not perfect number");
        
    }
 return 0;
}