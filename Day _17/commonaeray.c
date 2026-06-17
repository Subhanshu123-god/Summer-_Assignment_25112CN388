/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,4,5};
    int c[]={2,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int p=sizeof(c)/sizeof(c[0]);
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j]){
                for(int k=0;k<p;k++){
                    if(a[i]==c[k]){
                        printf("%d",a[i]);
                    }
                }
            }
        }
    }

    return 0;
}