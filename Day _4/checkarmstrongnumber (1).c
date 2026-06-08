/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,count=0,i,a;
    printf("enter number");
    scanf("%d",&i);
    n=i;
    while(n!=0){
        a=n%10;
        count=count+a*a*a;
        n=n/10;
    }
if(count==i){
    printf(" its a armstrong ");
}
else{
    printf("not a armstrong ");
}

    return 0;
}