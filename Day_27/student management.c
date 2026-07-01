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
    int age;
    int studentClass;
    char section[2];
    char address[100];
};

struct student stud[100];
int count = 0;

void addstudent();
void display();
void search();
void update();
void deletestudent();

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
        printf("5. Delete Student\n");
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
                deletestudent();
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

    printf("Enter Age: ");
    scanf("%d",&stud[count].age);

    printf("Enter Class: ");
    scanf("%d",&stud[count].studentClass);

    printf("Enter Section: ");
    scanf("%1s", stud[count].section);

    printf("Enter Address: ");
    scanf(" %[^\n]", stud[count].address);

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
        printf("Age         : %d\n",stud[i].age);
        printf("Class       : %d\n",stud[i].studentClass);
        printf("Section     : %s\n",stud[i].section);
        printf("Address     : %s\n",stud[i].address);
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
            printf("Age         : %d\n",stud[i].age);
            printf("Class       : %d\n",stud[i].studentClass);
            printf("Section     : %s\n",stud[i].section);
            printf("Address     : %s\n",stud[i].address);
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
            scanf("%d",&stud[i].age);

            printf("Enter New Class: ");
            scanf("%d",&stud[i].studentClass);

            printf("Enter New Section: ");
            scanf("%1s", stud[i].section);

            printf("Enter New Address: ");
            scanf(" %[^\n]", stud[i].address);

            printf("Student Updated Successfully!\n");
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student Not Found!\n");
}

void deletestudent()
{
    int roll, found=0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d",&roll);

    for(int i=0;i<count;i++)
    {
        if(stud[i].rollnumber==roll)
        {
            for(int j=i;j<count-1;j++)
            {
                stud[j]=stud[j+1];
            }

            count--;
            printf("Student Deleted Successfully!\n");
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student Not Found!\n");
}