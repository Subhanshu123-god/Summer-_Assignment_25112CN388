/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<math.h>
#include <stdio.h>
void armstrong(int);

int main()
{
    int n;
    printf("enter first number");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
void armstrong(int n)
{
    int a,b=0,c,count;
    while(n>0){
        n=n/10;
        count++;
        
    }
    c=n;
    while(n>0){
        a=n%10;
        b=b+pow(a,count);
        n=n/10;
    }
    if(c==b){
        printf(" is a armstrong number");
        
    }
    else{
        printf("is not armstrong number");
    }
    
        
}
    
        
    
