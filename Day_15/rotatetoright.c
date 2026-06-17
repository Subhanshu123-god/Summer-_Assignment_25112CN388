/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverse(int a[],int,int);

int main()
{
    
    int n=5;
    int a[5]={1,2,3,4,5};
    reverse(a,0,n-1);
    reverse(a,1,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }



    return 0;
}
    void reverse(int a[],int i,int j){
        while(i<=j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        
    }
    
