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
    printf("enter number ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d",a[j]);
    }
    int max=a[0];
    int smax=a[0];
    for(int m=0;m<n;m++){
        if(max<a[m]){
            smax=max;
            max=a[m];
        }
        else if(smax<a[m] && max!=a[m]){
            smax=max;
        }
        
    }
    
    
    printf(" the second largest element %d",smax);

    return 0;
}