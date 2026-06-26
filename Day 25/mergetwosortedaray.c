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
    printf("enter character ");
    gets(a);
    for(int i=0;i<strlen(a)-1;i++){
        for(int j=i+1;j<strlen(a);j++){
            if(a[i]>a[j]){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
    printf("\n");
    char b[50];
    printf("enter character");
    gets(b);
    for(int i=0;i<strlen(b)-1;i++){
        for(int j=i+1;j<strlen(b);j++){
            if(b[i]>b[j]){
                char mac=b[i];
                b[i]=b[j];
                b[j]=mac;
            }
        }
    }
    printf("%s",b);
    printf("\n");
    char c[100];
    int n=0;
    for(int i=0;i<strlen(a);i++){
        c[n++]=a[i];
        
    }
    int j;
    for(int j=0;j<=strlen(b);j++){
        c[n++]=b[j];
    }
    printf("%s",c);

    for(int i=0;i<strlen(c)-1;i++){
        for(j=i+1;j<strlen(c);j++){
            if(c[i]>c[j]){
                char max=c[i];
                c[i]=c[j];
                c[j]=max;
            }
        }
    }
    printf("%s",c);
    

    return 0;
}
