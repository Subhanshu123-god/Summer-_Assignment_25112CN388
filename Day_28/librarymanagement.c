/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct book{
    int bookid;
    char title[60];
    char author[50];
    int quantity;
};
void display();
void addbook();
void searchbook();
void update();
void deletebook();
void issuereturn();
struct book b[100];
int ch;
int count=0;

int main()
{
    do{
        printf("menu\n");
        printf("1:display\n");
        printf("2:addbook\n");
        printf("3:searchbook\n");
        printf("4:update\n");
        printf("5:delete book\n");
        printf("6:issuereturn");
        printf("7:exit");
        printf("enter option to choose:");
        scanf("%d",&ch);
        switch(ch){
            case 1:display();
            break;
            case 2:addbook();
            break;
            case 3:searchbook();
            break;
            case 4:update();
            break;
            case 5:deletebook();
            break;
            case 6:issuereturn();
            break;
            case 7:printf("exit");
            break;
            default:printf("invalid input");
        }
    }
    while(ch!=7);
    return 0;
}
void addbook(){
    printf("enter book id:");
    scanf("%d",&b[count].bookid);
    getchar();
    
    printf("enter author:");
    gets(b[count].author);
    printf("\n");
    printf("enter quantity:");
    scanf("%d",&b[count].quantity);
    getchar();
    
    printf("enter title ");
    gets(b[count].title);
    printf("\n");
    count++;
}
void display(){
    for(int i=0;i<count;i++){
        printf("bookid:%d\n",b[i].bookid);
        printf("author:%s\n",b[i].author);
        printf("quantity:%d\n",b[i].quantity);
        printf("title:%s\n",b[i].title);
    }
}
void searchbook(){
    int x;
    printf("enter bookid that you want to search ");
    scanf("%d",&x);
    int found=0;
    for(int i=0;i<count;i++){
        if(b[i].bookid==x){
            printf("bookid:%d\n",b[i].bookid);
            getchar();
            printf("author:%s\n",b[i].author);
            printf("quantity:%d\n",b[i].quantity);
            getchar();
            printf("title:%s\n",b[i].title);
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
        if(x==b[i].bookid){
            printf("enter new bookid:");
            scanf("%d",&b[i].bookid);
            printf("enter new quantity:");
            scanf("%d",&b[i].quantity);
            
        }
        
    }
}
void deletebook()
{
    int x;
    printf("enter roll that you want to delete: ");
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(b[i].bookid==x){
            for(int j=i;j<count;j++){
                b[j]=b[j+1];
            }
            count--;
            printf("value delete ");
            
        }
    }
    
}
void issuereturn()
{
    printf("enter bookid that you want to return ");
    int x;
    scanf("%d",&x);
    for(int i=0;i<count;i++){
        if(b[i].bookid==x){
            if(b[i].quantity>0){
                b[i].quantity--;
                printf("book issued successfully \n");
                
            }
            else{
                printf("book not issued successfully ");
            }
            return;
            
        }
    }
}

