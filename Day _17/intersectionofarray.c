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
    int b[]={2,3,4,5,8,9,10,1};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    for(int i=0;i<m;i++){
        printf("%d",b[i]);
    }
    int c[n],count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                for(int k=0;k<n;k++){
                    c[count]=a[i];
                    count++;
                    break;
                }
            }
        }
    }
    printf("common elements ");
    for(int i=0;i<count;i++){
        printf("%d",c[i]);
    }
    

    return 0;
        
}