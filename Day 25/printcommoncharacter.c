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
    printf("enter character");
    gets(a);
    for(int i=0;i<strlen(a);i++){
        int count=1;
        for(int j=i+1;j<strlen(a);j++){
            if(a[i]==a[j]){
                count++;
                
            }
        }
        int printed = 0;
        for(int k = 0; k < i; k++)
        {
            if(a[k] == a[i])
            {
                printed = 1;
                break;
            }
        }

        if(count > 1 && !printed)
        {
            printf("%c ", a[i]);
        }
        
    }

    return 0;
}
