/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("\n");
    
        for(int b=0;b<n-i;b++){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++)
        {
            printf("*");
            
            
        }        
        
        
    }

    return 0;
}