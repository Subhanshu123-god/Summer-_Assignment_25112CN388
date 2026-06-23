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
    int b=strlen(a);
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
        if(b>c){
            b=c;
            m=a[i];

        }
    }
    printf("%d character with minimum occurance",b);
    printf(" character with minimum occurance %c",m);
    
    
    

    return 0;
}