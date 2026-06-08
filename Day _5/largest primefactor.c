/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
long long getlargestprimefactor(long long n)
{
    long long maxprime=-1;
    while(n%2==0)
    {
        maxprime=2;
        n=n/2;
    }
    for(long long i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            maxprime=i;
            n=n/i;
        }
    }
    if(n>2){
        maxprime=n;
    }
    return maxprime;
}

int main()
{
    long long num;
    scanf("%lld",&num);
    if(num<2)
    {
        printf("number less than 2 do not have prime factor ");
        return 0;
    }
    long long result= getlargestprimefactor(num);
    printf("the largest prime factor of %lld is: %lld\n",num,result);
    

    return 0;
}