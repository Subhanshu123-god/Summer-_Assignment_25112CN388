/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,n;
    long long result=1;
    printf("enter number");
    scanf("%d",&x);
    printf("enternumber");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        result=result*x;
    }
    printf("%d^%d=%lld\n",x,n, result);
    return 0;
}