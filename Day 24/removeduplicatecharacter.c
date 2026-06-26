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
    printf("enter character ");
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        for(int j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                for(int k=j;a[k]!='\0';k++){
                    a[k]=a[k+1];
                }
                j--;
            }
        }
    }
    printf("%s",a);

    return 0;
}