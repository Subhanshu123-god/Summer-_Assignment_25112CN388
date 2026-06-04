/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int low,high,number,original,rem,count=0;
    double result=0.0;
    printf("enter two number");
    scanf("%d%d",&low,&high);
    printf("armstrong numbers between %d and %d are:",low,high);
    if(high<low){
        high+=low;
        low=high-low;
        high-=low;
    }
    for(number=low+1;number<high;++number){
        original=number;
        while(original!=0){
            original=original/10;
            ++count;
        }
        original=number;
        while(original!=0){
            rem=original%10;
            result=result+pow(rem,count);
            original/=10;
        }
        if((int)result==number){
            printf("%d",number);
        }
        count=0;
        result=0;
    }

  return 0;
}