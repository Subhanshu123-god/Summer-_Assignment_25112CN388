/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[50];
    printf("enter number");
    char m;
    gets(a);
    int b=0;
    for(int i=0;a[i]!=0;i++){
        int count=0;
        for(int j=0;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
                
            
        }
        int c=count;
        if(b<c){
            b=c;
            m=a[i];

        }
    }
    printf("%d character with maximum occurance\n",b);
    printf(" character with maximum occurance %c",m);
    
    
    

    return 0;
}