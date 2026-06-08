#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter secound number");
    scanf("%d",&b);
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
printf("gcd is %d",a);
return 0;
}