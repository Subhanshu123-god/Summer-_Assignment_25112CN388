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
    printf("enter row");
    scanf("%d",&r1);
    printf("enter coloumn");
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
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
    int r2,c2;
    printf("enter row ");
    scanf("%d",&r2);
    printf("enter coloumn");
    scanf("%d",&c2);
    int b[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r2;i++){
        printf("\n");
        for(int j=0;j<c2;j++){
            printf("%d",b[i][j]);
        }
    }
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\n");
    for(int i=0;i<r1;i++){
        printf("\n");
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
    }
    
    

    return 0;
}
