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
    char a[20];
    printf("enter character ");
    gets(a);
    int vowel=0;
    int consonent=0;
    for(int i=0;i<strlen(a)-1;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||
        a[i]=='I'||a[i]=='O'||a[i]=='U'){
            vowel++;
        }
        else{
            consonent++;
        }
    
        
        
    }
    printf("%d are vowel in words",vowel);
    printf("%d are consonent",consonent);



    return 0;
}