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
    printf("enter number");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("enter number");
    scanf("%d",&x);
    int flag=0;
    int low=0;
    int high=n-1;
    int mid =(low+high)/2;
    while(low<=high){
        if(a[mid]==x){
            printf("index of element is:");
            printf("%d",mid);
            break;
            
        }
        else if(mid<high){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return 0;
}