/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[50];
    printf("enter number");
    gets(a);
    int b=0;
    for(int i=0;a[i]!='\0';i++){
        int count=0;
        for(int j=0;a[j]!='\0';j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        int c=count;
        if(b<c){
            b=c;
            
        }
    }
    printf("max occurence %d",b);
    

    return 0;
}
