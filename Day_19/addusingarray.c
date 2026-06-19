/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int row,coloumn;
    printf("enter number of rows");
    scanf("%d",&row);
    printf("enter number of colounm");
    scanf("%d",&coloumn);
    int a[row][coloumn];
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0;i<row;i++){
        printf("\n");
        for(int j=0;j<coloumn;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    int b[row][coloumn];
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        printf("\n");
        for(int j=0;j<coloumn;j++){
            printf("%d",b[i][j]);
            
        }
    }
    printf("\n");
    int c[row][coloumn];
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<row;i++){
        printf("\n");
        for(int j=0;j<coloumn;j++){
            printf("%d",c[i][j]);
        }
    }

    return 0;
}