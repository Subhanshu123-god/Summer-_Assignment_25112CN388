/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
    int count=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
        {
            if(a[i][j]!=a[j][i]){
            count=0;
            break;
                
            }
        }
    
    }
    if(count=1){
        printf("it is symmetric ");
    }
    else{
        printf("Not symmetry");
    }

    return 0;
}