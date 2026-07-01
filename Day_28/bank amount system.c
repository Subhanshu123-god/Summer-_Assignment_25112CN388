/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct account{
    int accno;
    char name[60];
    int contact;
    int balance;
};
void display();
void addaccount();
void searchaccount();
void deposit();
void withdraw();
void deleteaccount();
void update();
struct account a[100];
int ch;
int count=0;

int main()
{
    do{
        printf("menu\n");
        printf("1:display\n");
        printf("2:addaccount\n");
        printf("3:searchaccount\n");
        printf("4:withdraw\n");
        printf("5:deposit\n");
        printf("6:deleteaccount");
        printf("7:update");
        printf("7:exit");
        printf("enter option to choose:");
        scanf("%d",&ch);
        switch(ch){
            case 1:display();
            break;
            case 2:addaccount();
            break;
            case 3:searchaccount();
            break;
            case 4:withdraw();
            break;
            case 5:deposit();
            break;
            case 6:deleteaccount();
            break;
            case 8:printf("exit");
            break;
            case 7:update();
            default:printf("invalid input");
        }
    }
    while(ch!=8);
    return 0;
}
void addaccount(){
    printf("enter account number :");
    scanf("%d",&a[count].accno);
    getchar();
    
    printf("enter name:");
    gets(a[count].name);
    printf("\n");
    printf("enter contact number:");
    scanf("%d",&a[count].contact);
    printf("enter balance:");
    scanf("%d",&a[count].balance);
    printf("\n");
    count++;
}
void display(){
    for(int i=0;i<count;i++){
        printf("acc no:%d\n",a[i].accno);
        printf("name:%s\n",a[i].name);
        printf("contact:%d\n",a[i].contact);
        printf("balance:%d\n",a[i].balance);
    }
}
void searchaccount(){
    int x;
    printf("enter bookid that you want to search ");
    scanf("%d",&x);
    int found=0;
    for(int i=0;i<count;i++){
        if(a[i].accno==x){
            printf("accno:%d\n",a[i].accno);
            getchar();
            printf("name:%s\n",a[i].name);
            printf("balance:%d\n",a[i].balance);
            printf(":%d\n",a[i].contact);
            found=1;
            break;
        }
    }
    if(found==1){
        printf("\ngot the book details ");
    }
    else{
        printf("didn't get book id");
    }
}
void update(){
    int x;
    printf("enter book id number whose valur to update:");
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(x==a[i].accno){
            printf("enter new account number:");
            scanf("%d",&a[i].accno);
            printf("enter new mobile:");
            scanf("%d",&a[i].contact);
        
            
        }
        
    }
}
void deleteaccount()
{
    int x;
    printf("enter account number that you want to delete: ");
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(a[i].accno==x){
            for(int j=i;j<count;j++){
                a[j]=a[j+1];
            }
            count--;
            printf("value delete ");
            
        }
    }
    
}
void withdraw()
{
    printf("enter amount to withdraw: ");
    int amount;
    scanf("%d",&amount);
    int x;
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(a[i].accno==x){
            if(a[i].balance<amount){
                printf("insufficient balanace");
                
                
            }
            else{
                a[i].balance=a[i].balance-amount;
                printf("amount:%d",amount);
                printf("current balance:%d",a[i].balance);
            }
            return;
            
        }
    }
}
void deposit(){
    printf("enter amount to deposit: ");
    int amount;
    scanf("%d",&amount);
    int x;
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(a[i].accno==x){
            if(amount<0){
                printf("invalid amount");
        
            }
            else{
                a[i].balance=a[i].balance+amount;
                printf("amount:%d",amount);
                printf("current balance:%d",a[i].balance);
            }
            return;
            
        }
    }
    
}

