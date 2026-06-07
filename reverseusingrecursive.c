/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int reverse(int,int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",reverse(n,0));
    return 0;
}
int reverse(int n,int remain){
    if(n==0)return remain;
    remain=remain*10+n%10;
    return reverse(n/10,remain);
}



    
