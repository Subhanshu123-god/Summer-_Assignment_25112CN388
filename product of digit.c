#include<stdio.h>
int main()
{
    int a,product=1;
    printf("enter number");
    scanf("%d",&a);
    while(a!=0)
    {
        product=product*(a%10);
        a=a/10;
    }
printf("the product is %d",product);
return 0;

}