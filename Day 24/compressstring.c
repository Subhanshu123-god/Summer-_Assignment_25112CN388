/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[50];
    printf("enter word");
    gets(a);
    int count=1;
    for(int i=0;a[i]!='\0';i++){
        
        if(a[i]==a[i+1]){
            count++;
                
        }
        else{
            printf("%c%d",a[i],count);
            count=1;
            
            
        }
        
    }

    return 0;
}