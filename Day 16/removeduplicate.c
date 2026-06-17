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
    int a[4]={1,1,4,1};
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                    
                }
                n--;
                j--;
                
            }
            
            
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        
    }

    
    
    
    
        

    
    

    return 0;
    
}
