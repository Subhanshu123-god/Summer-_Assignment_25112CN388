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
    for(int i=1;i<=n;i++){
        printf("\n");
        int a=n;
        for(int j=i;j<=a;j++){
            printf("*");
            
        }
    }

    return 0;
}