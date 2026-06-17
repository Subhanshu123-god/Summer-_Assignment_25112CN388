/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n=5;
    int a[5]={1,2,3,4,5};
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    for(int j=0;j<n;j++){
        printf("  %d ",a[j]);
    }

    return 0;
}