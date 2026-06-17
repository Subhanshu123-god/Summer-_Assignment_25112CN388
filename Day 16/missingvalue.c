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
    int a[5]={1,7,6,5};
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+a[i];
    }
    int total,missing;
    total=(n*(n+1))/2;
    missing=total-sum;
    printf("%d is the missing value",missing);
    
    

    return 0;
    
}
