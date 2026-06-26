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
    char a[4][50]={"AAhil","Aditya","rohan"};
    for(int i=0;i<3;i++){
            printf("%s\t",a[i]);
        
    }
    char temp[50];
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            
            }
            
        }
    }
    for(int i=0;i<3;i++){
        printf("\n%s\n",a[i]);
    }

    return 0;
}