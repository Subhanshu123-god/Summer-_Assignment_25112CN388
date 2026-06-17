/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    for(int j=0;j<n;j++){
        printf("%d",a[j]);
    }
    int x,count=0;
    printf("enter value to find");
    scanf("%d",&x);
    for(int m=0;m<n;m++){
        if(x==a[m]){
            count++;
        }
    }
    printf("number of duplicate %d",count-1);

    return 0;
}