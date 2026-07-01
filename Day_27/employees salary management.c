/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct employee{
    int empid;
    char name[50];
    int age;
    char department[50];
    char designation[50];
    int basicsalary;
    int da;
    int hra;//house rent 
    int bonus;
    int deduction;
    int gross;
    int netsalary;
    
    
};
void display();
void addemployee();
void searchemployee();
void update();
void deleteemployee();
struct employee e[100];
int ch;
int count=0;

int main()
{
    do{
        printf("menu\n");
        printf("1:display\n");
        printf("2:addemployee\n");
        printf("3:searchemployee\n");
        printf("4:update\n");
        printf("5:delete employee\n");
        printf("6:exit");
        printf("enter option to choose:");
        scanf("%d",&ch);
        switch(ch){
            case 1:display();
            break;
            case 2:addemployee();
            break;
            case 3:searchemployee();
            break;
            case 4:update();
            break;
            case 5:deleteemployee();
            break;
            case 6:printf("exit");
            break;
            default:printf("invalid input");
        }
    }
    while(ch!=6);
    return 0;
}
void addemployee(){
    printf("rnter employee id:");
    scanf("%d",&e[count].empid);
    getchar();
    printf("enter name:");
    gets(e[count].name);
    printf("\n");
    printf("enter age:");
    scanf("%d",&e[count].age);
    getchar();
    printf("enter designation ");
    gets(e[count].designation);
    printf("\n");
    printf("rnter department ");
    gets(e[count].department);
    printf("enter basic salary:");
    scanf("%d",&e[count].basicsalary);
    printf("enter dearness allowance ");
    scanf("%d",&e[count].da);
    printf("enter house allowance ");
    scanf("%d",&e[count].hra);
    printf("rnter bonous ");
    scanf("%d",&e[count].bonus);
    printf("enter deduction ");
    scanf("%d",&e[count].deduction);
    printf("gross");
    e[count].gross=e[count].basicsalary+e[count].da+e[count].hra+e[count].bonus;
    e[count].netsalary=e[count].gross-e[count].deduction;
    
    printf("\n");
    count++;
}
void display(){
    for(int i=0;i<count;i++){
        printf("empid:%d\n",e[i].empid);
        printf("empname:%s\n",e[i].name);
        printf("age:%d\n",e[i].age);
        printf("designation:%s\n",e[i].designation);
        printf("department:%s\n",e[i].department);
        printf("basic salary:%d\n",e[i].basicsalary);
        printf("dearness allowance:%d\n",e[i].da);
        printf("house rent allowance:%d\n",e[i].hra);
        printf("bonous:%d\n",e[i].bonus);
        printf("deduction:%d\n",e[i]. deduction);
        printf("gross%d\n",e[i].gross);
        printf("net salary%d\n",e[i].netsalary);
    }
}
void searchemployee(){
    int x;
    printf("enter roll that you want to search ");
    scanf("%d",&x);
    int found=0;
    for(int i=0;i<count;i++){
        if(e[i].empid==x){
            printf("empid:%d\n",e[i].empid);
            getchar();
            printf("empname:%s\n",e[i].name);
            printf("age:%d\n",e[i].age);
            getchar();
            printf("department:%s\n",e[i].department);
            printf("designation:%s\n",e[i].designation);
            printf("gross:%d\n",e[i].gross);
            printf("net salary:%d\n",e[i].netsalary);
            found=1;
            break;
        }
    }
    if(found==1){
        printf("\ngot the employee details ");
    }
    else{
        printf("didn't get employee id");
    }
}
void update(){
    int x;
    printf("enter roll number whose valur to update:");
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(x==e[i].empid){
            printf("enter new basic salary:");
            scanf("%d",&e[i].basicsalary);
            printf("enter new house allowance:");
            scanf("%d",&e[i].hra);
            printf("enter new dearness allowance:");
            scanf("%d",&e[i].da);
            printf("enter new bonous");
            scanf("%d",&e[i].bonus);
            printf("enter deduction ");
            scanf("%d",&e[i].deduction);
            
        }
        
    }
}
void deleteemployee(){
    int x;
    printf("enter roll that you want to delete: ");
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(e[i].empid==x){
            for(int j=i;j<count;j++){
                e[j]=e[j+1];
            }
            count--;
            printf("value delete ");
            
        }
    }
    
}

