#include<stdio.h>
int main()
{
    int first=0,secound=1,next,n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",first);
        next=first+secound;
        first=secound;
        secound=next;

    }
return 0;
}