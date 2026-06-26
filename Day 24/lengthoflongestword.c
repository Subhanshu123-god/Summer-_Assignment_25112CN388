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
    printf("enter word");
    gets(a);
    int max=0;
    
    int len=0;
    int i=0;
    while(a[i]!='\0'){
        if(a[i]!=' '&& a[i]!='\n'){
            len++;
            i++;
            
        }
        else{
            if(max<len){
                max=len;
                len=0;
                i++;
            }
            
            
            
        }
        
    }
    if(max<len){
        max=len;
    }
    printf("%d :is the longest length of the word",max);

    return 0;
}