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
        for(int j=0;j<=i;j++){
            printf("%c",'A'+i);
        }
    }

    return 0;
}