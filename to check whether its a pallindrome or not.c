#include<stdio.h>
int main()
{
    int a,b,rev=0;
    printf("enter number");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
 if(b==rev)
{
    printf("its a pallindrome");

}
else
{
    printf("its not a pallindreome");
}
return 0;
}