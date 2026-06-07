/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int fibbo(int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d",fibbo(i));
    }
    return 0;
}
int fibbo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return (fibbo(n-1)+fibbo(n-2));
}