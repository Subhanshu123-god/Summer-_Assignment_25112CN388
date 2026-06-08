/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int countsetbits(int num)
{
    int count=0;
    while(num){
    num=num&(num-1);
    count++;
    }
    return count;
}


int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    int result=countsetbits(num);
    printf("number of set bits:%d\n",result);
    return 0;
}
