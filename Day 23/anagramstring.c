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
    printf("enter word");
    gets(a);
    for(int i=0;i<strlen(a)-1;i++){
        for(int j=0;j<strlen(a);j++){
            if(a[i]<a[j]){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
        }
    }
    printf("sorted array %s",a);
    char b[50];
    printf("enter word");
    gets(b);
    for(int i=0;i<strlen(b);i++){
        for(int j=0;j<strlen(b)-1;j++){
            if(b[i]<b[j]){
                char mac=b[i];
                b[i]=b[j];
                b[j]=mac;
            }
        }
    }
    printf("%s",b);
    if(strcmp(a,b)==0)
    {
        printf("its a anagram string");
    }
    else{
        printf("its not a anagram string");
    }

    return 0;
}
