/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void prime(int);

int main()
{
    int n;
    printf("enter first number");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int i=1,count=0;
    while(i<=n){
        if(n%i==0){
            count++;
            
            
        }
        i++;
    }
    if(count==2){
        printf("it is a prime number %d",n);
            
    }
    else
    {
        printf("its is not a prime number %d",n);
            
    }
        
    
}