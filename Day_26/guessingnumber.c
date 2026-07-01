/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int randomnumber=(rand()%100)+1;
    int x;
    scanf("%d",&x);
    if(x==randomnumber){
        printf("number guessed is correct ");
        
    }
    else{
        printf("number guessed is not correct ");
    }

    
    
    

    return 0;
}
