/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r1,c1;
    printf("enter row number");
    scanf("%d",&r1);
    printf("enter coloumn number");
    scanf("%d",&c1);
    int a[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        printf("\n");
        for(int j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
            
        }
    }
    printf("sum of all number:%d",sum);
    
    

    return 0;
}
