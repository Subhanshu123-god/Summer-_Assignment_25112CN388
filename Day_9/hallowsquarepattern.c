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
    for(int i=0;i<n;i++){
        printf("\n");
        
        for(int j=0;j<n;j++){
            if(i==0||i==n-1 || j==0|| j==n-1)
            {
                printf("*");
                
            }
            else{
                printf(" ");
            }
                
        }
        
    }

    return 0;
}