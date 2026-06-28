#include <stdio.h>
#include <string.h>

#define MAX 100

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seatNo;
};

struct Ticket ticket[MAX];
int count = 0;

void bookTicket()
{
    if (count == MAX)
    {
        printf("\nNo More Tickets Available!\n");
        return;
    }

    printf("Enter Ticket Number: ");
    scanf("%d", &ticket[count].ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", ticket[count].name);

    printf("Enter Destination: ");
    scanf(" %[^\n]", ticket[count].destination);

    printf("Enter Seat Number: ");
    scanf("%d", &ticket[count].seatNo);

    count++;

    printf("\nTicket Booked Successfully!\n");
}

void displayTickets()
{
    if (count == 0)
    {
        printf("\nNo Tickets Booked!\n");
        return;
    }

    printf("\n========== BOOKED TICKETS ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nTicket %d\n", i + 1);
        printf("Ticket Number : %d\n", ticket[i].ticketNo);
        printf("Passenger     : %s\n", ticket[i].name);
        printf("Destination   : %s\n", ticket[i].destination);
        printf("Seat Number   : %d\n", ticket[i].seatNo);
    }
}

void searchTicket()
{
    int ticketNo, found = 0;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);

    for (int i = 0; i < count; i++)
    {
        if (ticket[i].ticketNo == ticketNo)
        {
            printf("\nTicket Found\n");
            printf("Ticket Number : %d\n", ticket[i].ticketNo);
            printf("Passenger     : %s\n", ticket[i].name);
            printf("Destination   : %s\n", ticket[i].destination);
            printf("Seat Number   : %d\n", ticket[i].seatNo);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nTicket Not Found!\n");
}

void cancelTicket()
{
    int ticketNo, found = 0;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);

    for (int i = 0; i < count; i++)
    {
        if (ticket[i].ticketNo == ticketNo)
        {
            for (int j = i; j < count - 1; j++)
            {
                ticket[j] = ticket[j + 1];
            }

            count--;

            printf("\nTicket Cancelled Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nTicket Not Found!\n");
}

void updateTicket()
{
    int ticketNo, found = 0;

    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);

    for (int i = 0; i < count; i++)
    {
        if (ticket[i].ticketNo == ticketNo)
        {
            printf("Enter New Passenger Name: ");
            scanf(" %[^\n]", ticket[i].name);

            printf("Enter New Destination: ");
            scanf(" %[^\n]", ticket[i].destination);

            printf("Enter New Seat Number: ");
            scanf("%d", &ticket[i].seatNo);

            printf("\nTicket Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nTicket Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Update Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
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
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}