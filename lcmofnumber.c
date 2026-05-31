#include<stdio.h>
int main()
{
    int m,n,lcm;
    printf("enter number");
    scanf("%d",&m);
    printf("enter number");
    scanf("%d",&n);
    lcm=(m>n)?m:n;
    while(1)
    {
        if(lcm%m==0 && lcm%n==0)
        {
            printf("lcm is %d",lcm);
            break;
        }
        lcm++;
    }
return 0;
}