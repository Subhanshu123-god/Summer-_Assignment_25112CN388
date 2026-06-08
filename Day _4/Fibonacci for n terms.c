/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int first=0,second=1,next,n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d%d",first,second);
    next=first+second;
    while(next<=n)
    {
       printf("%d",next);
       first=second;
       second=next;
       next=first+second;
    }
    return 0;   
    
}
