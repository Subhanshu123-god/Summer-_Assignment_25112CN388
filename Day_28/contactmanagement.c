/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct contact
{
    int id;
    char name[50];
    char contact[30];
    char email[30];
    char address[30];
};

struct contact t[100];
int count = 0;

void Addcontact();
void displaycontact();
void searchcontact();
void updatecontact();
void deletecontact();

int main()
{
    int ch;

    do
    {
        printf("\n===== contact Management System =====\n");
        printf("1. aAdd contact\n");
        printf("2. Display contact\n");
        printf("3. Search contact\n");
        printf("4. Update contact\n");
        printf("5. Delete contact\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                Addcontact();
                break;

            case 2:
                displaycontact();
                break;

            case 3:
                searchcontact();
                break;

            case 4:
                updatecontact();
                break;

            case 5:
                deletecontact();
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

void Addcontact()
{
    printf("id: ");
    scanf("%d", &t[count].id);

    printf("Enter  Name: ");
    scanf("%s", t[count].name);

    printf("Enter contact: ");
    scanf("%s", t[count].contact);

    printf("Enter email: ");
    scanf("%s", t[count].email);

    printf("Enter address: ");
    scanf("%d", &t[count].address);

    count++;

    printf("Contact saved Successfully!\n");
}

void displaycontact()
{
    if(count == 0)
    {
        printf("No contact found.\n");
        return;
    }

    printf("\n----- contact List -----\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nID : %d", t[i].id);
        printf("\nName      : %s", t[i].name);
        printf("\ncontact    : %s", t[i].contact);
        printf("\nemail : %s", t[i].email);
        printf("\naddress   : %d\n", t[i].address);
    }
}

void searchcontact()
{
    int id, found = 0;

    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].id == id)
        {
            printf("\ncontact Found\n");
            printf("Name : %s\n", t[i].name);
            printf("contact : %s\n", t[i].contact);
            printf("email : %s\n", t[i].email);
            printf("address : %s\n", t[i].address);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("contact Not Found!\n");
}

void updatecontact()
{
    int id, found = 0;

    printf("Enter  ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].id == id)
        {
            printf("Enter New Name: ");
            scanf("%s", t[i].name);

            printf("Enter New contact: ");
            scanf("%s", t[i].contact);

            printf("Enter email: ");
            scanf("%s", &t[i].email);
            
            printf("enter address");
            scanf("%s",&t[i].address);

            printf("contactUpdated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("contact Not Found!\n");
}

void deletecontact()
{
    int id, found = 0;

    printf("Enter ID to Cancel: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                t[j] = t[j + 1];
            }

            count--;
            found = 1;
            printf("contact Cancelled Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("contact Not Found!\n");
}