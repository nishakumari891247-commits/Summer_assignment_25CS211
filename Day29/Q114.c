#include <stdio.h>
#include <string.h>

#define MAX 100

struct Ticket
{
    int ticketId;
    char passengerName[50];
    char source[50];
    char destination[50];
    int seatNo;
};

struct Ticket ticket[MAX];
int count = 0;

void bookTicket()
{
    if (count == MAX)
    {
        printf("\nNo Tickets Available!\n");
        return;
    }

    printf("Enter Ticket ID: ");
    scanf("%d", &ticket[count].ticketId);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", ticket[count].passengerName);

    printf("Enter Source: ");
    scanf(" %[^\n]", ticket[count].source);

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
        printf("Ticket ID      : %d\n", ticket[i].ticketId);
        printf("Passenger Name : %s\n", ticket[i].passengerName);
        printf("Source         : %s\n", ticket[i].source);
        printf("Destination    : %s\n", ticket[i].destination);
        printf("Seat Number    : %d\n", ticket[i].seatNo);
    }
}

void searchTicket()
{
    int id, found = 0;

    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (ticket[i].ticketId == id)
        {
            printf("\nTicket Found\n");
            printf("Ticket ID      : %d\n", ticket[i].ticketId);
            printf("Passenger Name : %s\n", ticket[i].passengerName);
            printf("Source         : %s\n", ticket[i].source);
            printf("Destination    : %s\n", ticket[i].destination);
            printf("Seat Number    : %d\n", ticket[i].seatNo);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nTicket Not Found!\n");
}

void updateTicket()
{
    int id, found = 0;

    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (ticket[i].ticketId == id)
        {
            printf("Enter New Passenger Name: ");
            scanf(" %[^\n]", ticket[i].passengerName);

            printf("Enter New Source: ");
            scanf(" %[^\n]", ticket[i].source);

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

void cancelTicket()
{
    int id, found = 0;

    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (ticket[i].ticketId == id)
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

        printf("Enter Your Choice: ");
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
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}