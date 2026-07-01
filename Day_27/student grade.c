/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct student
{
    int rollnumber;
    char name[50];
    int math;
    int science;
    int hindi;
    int english;
    int computer;
    int total;
    char grade;
    float percentage;
};

struct student stud[100];
int count = 0;

void addstudent();
void display();
void search();
void update();
void result();

int main()
{
    int ch;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. result Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                addstudent();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                update();
                break;

            case 5:
                result();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(ch != 6);

    return 0;
}

void addstudent()
{
    printf("Enter Roll Number: ");
    scanf("%d",&stud[count].rollnumber);

    printf("Enter Name: ");
    scanf(" %[^\n]", stud[count].name);

    printf("Enter math marks: ");
    scanf("%d",&stud[count].math);

    printf("Enter science marks: ");
    scanf("%d",&stud[count].science);

    printf("Enter English marks: ");
    scanf("%d",&stud[count].english);

    printf("Enter hindi marks: ");
    scanf("%d",&stud[count].hindi);
    printf("enter computer marks:");
    scanf("%d",&stud[count].computer);
    stud[count].total=stud[count].math+stud[count].science+stud[count].english+stud[count].hindi+stud[count].computer;
    stud[count].percentage=stud[count].total/5.0;

    count++;

    printf("Student Added Successfully!\n");
}

void display()
{
    if(count==0)
    {
        printf("No Students Found!\n");
        return;
    }

    for(int i=0;i<count;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number : %d\n",stud[i].rollnumber);
        printf("Name        : %s\n",stud[i].name);
        printf("math         : %d\n",stud[i].math);
        printf("science       : %d\n",stud[i].science);
        printf("English   : %d\n",stud[i].english);
        printf("hindi     : %d\n",stud[i].hindi);
        printf("computer   :%d\n",stud[i].computer);
        printf("total  :%d\n",stud[i].total);
        printf("percentage:%f\n",stud[i].percentage);
    }
}

void search()
{
    int roll, found=0;

    printf("Enter Roll Number to Search: ");
    scanf("%d",&roll);

    for(int i=0;i<count;i++)
    {
        if(stud[i].rollnumber==roll)
        {
            printf("\nRoll Number : %d\n",stud[i].rollnumber);
            printf("Name        : %s\n",stud[i].name);
            printf("math         : %d\n",stud[i].math);
            printf("science       : %d\n",stud[i].science);
            printf("english    : %d\n",stud[i].english);
            printf("hindi     : %d\n",stud[i].hindi);
            printf("computer   :%d\n",stud[i].computer);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student Not Found!\n");
}

void update()
{
    int roll, found=0;

    printf("Enter Roll Number to Update: ");
    scanf("%d",&roll);

    for(int i=0;i<count;i++)
    {
        if(stud[i].rollnumber==roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", stud[i].name);

            printf("Enter New Age: ");
            scanf("%d",&stud[i].math);

            printf("Enter New science marks: ");
            scanf("%d",&stud[i].science);

            printf("Enter New  English marks: ");
            scanf("%d", stud[i]. english);

            printf("Enter New hindi marks: ");
            scanf(" %d", stud[i].hindi);
            
            printf("enter new computer marks:");
            scanf("%d",stud[i].computer);

            printf("Student Updated Successfully!\n");
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student Not Found!\n");
}

void result()
{
    int roll, found=0;

    printf("Enter Roll Number : ");
    scanf("%d",&roll);

    for(int i=0;i<count;i++)
    {
        if(stud[i].rollnumber==roll)
        {
            if(stud[i].percentage>=90.0){
                stud[i].grade='A';
            }
            else if(stud[i].percentage>=80.0){
                stud[i].grade='B';
            }
            else if(stud[i].percentage>=70.0){
                stud[i].grade='C';
                
            }
            else if(stud[i].percentage>=60.0){
                stud[i].grade='D';
            }
            else{
                stud[i].grade='F';
            }
            printf("total  :%d\n",stud[i].total);
            printf("percentage :%f\n",stud[i].percentage);
            if(stud[i].grade=='F'){
                printf("FAIL");
            }
            else {
                printf("PASS");
            }
        }
        
    }
}