/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int num,count,fact, lastdigit,sum=0,temp;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        count=1,fact=1;
        lastdigit=num%10;
    }
    while(count<=lastdigit){
    fact=fact*count;
    count++;
    }
    sum=sum+fact;
    num=num/10;
    if(sum==temp)
    {
        printf("its a strong number");
        
    }
    else
    {
        printf("not a strong number");
    }
return 0;
}