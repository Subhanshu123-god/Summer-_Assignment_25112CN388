/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=7;
    int a[7]={1,1,5,1,5,1,5};
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        
    }
    printf("\n");
    int b=0,c=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
            if(b<count){
                b=count;
                int c=i;
            
            }
        }
    }
    printf("%d is the maxfrequencyof %d",b,a[c]);

    
    
    
    
        
    
    
    

    return 0;
    
}
