/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int a[]={1,1,4,1,5,78};
    int b[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int c=sizeof(b)/sizeof(b[0]);
    int merge=n+c;
    int m[merge];
    
    
    for(int i=0;i<n;i++){
        m[i]=a[i];
    }
    for(int i=0;i<c;i++){
        m[n+i]=b[i];
        
    }
    for(int i=0;i<merge;i++){
        printf("%d",m[i]);
    }
    return 0;
    
}
