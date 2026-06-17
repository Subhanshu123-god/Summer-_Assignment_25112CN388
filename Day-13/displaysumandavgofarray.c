/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a[100];
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    int sum=0,avg;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\n");
    printf("avg=%d \n",sum);
    printf("sum=%d",avg);

    return 0;
}