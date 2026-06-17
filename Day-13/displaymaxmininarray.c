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
    int m;
    m=a[0];
    printf("\n");
    for(int i=1;i<n;i++){
        if(m<a[i]){
            m=a[i];
            
        }
    }
    printf("%d is the max number",m);
    int j;
    j=a[0];
    printf("\n");
    for(int i=1;i<n;i++){
        if(n>a[i]){
            j=a[i];
        }
    }
    printf("%d is a min number",j);


    return 0;
}