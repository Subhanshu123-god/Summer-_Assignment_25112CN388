/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    printf("math quiz");
    int correct=0,wrong=0;
    int ch;
    do
    {
        printf("1.start");
        printf("4.exit");
        printf("enter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("question 1");
            int Multiple;
            Multiple=25*25;
            int x;
            printf("25*25=");
            scanf("%d",&x);
            if(x==Multiple){
                printf("answer is correct ");
                correct++;
                
            }
            else{
                printf("wrong answer");
                wrong++;
                
            }
            case 2:printf("question 2");
            int add=100+15;
            int xx;
            printf("what is addition of :100+15:");
            scanf("%d",&xx);
            if(xx==add){
                printf("answer correct ");
                correct++;
            } 
            else{
                printf("answer wrong");
                wrong++;
                
            }
            case 3:printf("question 3");
            int subtract=200-20;
            int xxx;
            printf("what is subtraction of:200-20:");
            scanf("%d",&xxx);
            if(xxx==subtract){
                printf("correct answer ");
                correct++;
                
            }
            else{
                printf("wrong answer");
                wrong++;
                
            }
            case 4:printf("thank you for giving the quiz");
            default:printf("invalid choice ");
            
        }
        printf("total correct answer:%d\n", correct);
        printf("total wrong answer:%d",wrong);
        float percentage;
        int total=wrong+correct;
        percentage=(correct*100.0)/total;
        printf("percentage of correct answer:%f", percentage);
    }
    while(ch!=4);
    return 0;
}
