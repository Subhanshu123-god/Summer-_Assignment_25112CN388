/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct ticket
{
    int ticketid;
    char name[50];
    char source[30];
    char destination[30];
    int seatno;
};

struct ticket t[100];
int count = 0;

void bookTicket();
void displayTickets();
void searchTicket();
void updateTicket();
void cancelTicket();

int main()
{
    int ch;

    do
    {
        printf("\n===== Ticket Booking Management System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Update Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                updateTicket();
                break;

            case 5:
                cancelTicket();
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

void bookTicket()
{
    printf("\nEnter Ticket ID: ");
    scanf("%d", &t[count].ticketid);

    printf("Enter Passenger Name: ");
    scanf("%s", t[count].name);

    printf("Enter Source: ");
    scanf("%s", t[count].source);

    printf("Enter Destination: ");
    scanf("%s", t[count].destination);

    printf("Enter Seat Number: ");
    scanf("%d", &t[count].seatno);

    count++;

    printf("Ticket Booked Successfully!\n");
}

void displayTickets()
{
    if(count == 0)
    {
        printf("No Tickets Booked.\n");
        return;
    }

    printf("\n----- Ticket List -----\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nTicket ID : %d", t[i].ticketid);
        printf("\nName      : %s", t[i].name);
        printf("\nSource    : %s", t[i].source);
        printf("\nDestination : %s", t[i].destination);
        printf("\nSeat No   : %d\n", t[i].seatno);
    }
}

void searchTicket()
{
    int id, found = 0;

    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].ticketid == id)
        {
            printf("\nTicket Found\n");
            printf("Name : %s\n", t[i].name);
            printf("Source : %s\n", t[i].source);
            printf("Destination : %s\n", t[i].destination);
            printf("Seat No : %d\n", t[i].seatno);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Ticket Not Found!\n");
}

void updateTicket()
{
    int id, found = 0;

    printf("Enter Ticket ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].ticketid == id)
        {
            printf("Enter New Name: ");
            scanf("%s", t[i].name);

            printf("Enter New Destination: ");
            scanf("%s", t[i].destination);

            printf("Enter New Seat Number: ");
            scanf("%d", &t[i].seatno);

            printf("Ticket Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Ticket Not Found!\n");
}

void cancelTicket()
{
    int id, found = 0;

    printf("Enter Ticket ID to Cancel: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(t[i].ticketid == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                t[j] = t[j + 1];
            }

            count--;
            found = 1;
            printf("Ticket Cancelled Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Ticket Not Found!\n");
}