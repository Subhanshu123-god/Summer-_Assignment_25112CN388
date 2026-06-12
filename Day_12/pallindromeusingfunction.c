/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void pallindrome(int);

int main()
{
    int n;
    printf("enter first number");
    scanf("%d",&n);
    pallindrome(n);
    return 0;
}
void pallindrome(int n)
{
    int a,rev=0,b;
    a=n;
    while(n>0){
        b=n%10;
        rev=rev*10+b;
        n=n/10;
        
    }
    if(a==rev){
        printf("its a pallindrome");
    }
    else{
        printf("its not a palindrome ");
    }
    
        
}
    
        
    
