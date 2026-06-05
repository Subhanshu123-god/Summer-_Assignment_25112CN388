/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n,b[10],i=0;
    printf("enter number");
    scanf("%d",&n);
    while(n>0){
        b[i++]=n%2;
        n=n/2;
        
    }
    printf("bimary");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    return 0;
    
}

    

