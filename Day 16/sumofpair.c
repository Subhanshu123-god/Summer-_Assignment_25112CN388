/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=4;
    int a[4]={1,4,4,1};
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        
    }
    printf("\n");
    int b,count=0;
    printf("enter number");
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b==a[i]+a[j]){
                count++;
            }
            
        }
    }
    printf(" the number of pairs of the sum %d",count);

    
    
    
    
        
    
    
    

    return 0;
    
}
