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
    int x;
    int count=0;
    printf("enter number to find");
    scanf("%d",&x);
    for(int m=0;m<n;m++){
        if(a[m]==x){
            count++;
        }
    
    }
    printf("%d is the frequency of number ",count);

    return 0;
}