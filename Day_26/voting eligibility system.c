/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    printf("enter age");
    scanf("%d",&x);
    if(x>=18){
        printf("ELIGIBLE FOR VOTING ");
    }
    else if(x<0){
        printf("AGE ENTERED IS INVALID ");
    }
    else{
        printf("NOT ELIGIBLE FOR VOTING ");
    }

    return 0;
}