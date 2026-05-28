#include<stdio.h>
int main()
{ int n,sum=0;
printf("enter number");
scanf("%d",&n);
while(n>0)
{
    sum=sum+n;
    n--;
}
printf("sumis %d",sum);
return 0; 
}
