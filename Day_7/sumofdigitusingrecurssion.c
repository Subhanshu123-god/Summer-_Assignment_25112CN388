/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int digit(int,int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",digit(n,0));
    return 0;
    
}
int digit(int n,int sum){
    if(n==0) return sum;
    sum=sum+n%10;
    return digit(n/10,sum);
}
