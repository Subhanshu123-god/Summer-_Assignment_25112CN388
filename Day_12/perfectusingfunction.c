


#include <stdio.h>
void perfect(int);

int main()
{
    int n;
    printf("enter first number");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
void perfect(int n)
{
    int i=1,sum=0,a;
    a=n;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
        
        
    }
    if(a==sum){
        printf("its a perfect number");
    }
    else{
        printf("its not a perfect number");
        
    }
        
    
        
}
    
        
    
