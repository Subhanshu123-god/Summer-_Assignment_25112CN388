#include<stdio.h>
int main()
{
    int start,end,i,j,count;
    printf("enter starting number: ");
    scanf("%d",&start);
    printf("enter ending number: ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }

        }
        if(count==2){
        printf("%d",i);
        }

    
    }
return 0;
}