#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contact[MAX];
int count = 0;

void addContact()
{
    if (count == MAX)
    {
        printf("\nContact List Full!\n");
        return;
    }

    printf("Enter Contact ID: ");
    scanf("%d", &contact[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    printf("Enter Email: ");
    scanf("%s", contact[count].email);

    count++;

    printf("\nContact Added Successfully!\n");
}

void displayContacts()
{
    if (count == 0)
    {
        printf("\nNo Contacts Found!\n");
        return;
    }

    printf("\n========== CONTACT LIST ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("ID     : %d\n", contact[i].id);
        printf("Name   : %s\n", contact[i].name);
        printf("Phone  : %s\n", contact[i].phone);
        printf("Email  : %s\n", contact[i].email);
    }
}

void searchContact()
{
    int id, found = 0;

    printf("Enter Contact ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (contact[i].id == id)
        {
            printf("\nContact Found\n");
            printf("ID     : %d\n", contact[i].id);
            printf("Name   : %s\n", contact[i].name);
            printf("Phone  : %s\n", contact[i].phone);
            printf("Email  : %s\n", contact[i].email);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nContact Not Found!\n");
}

void updateContact()
{
    int id, found = 0;

    printf("Enter Contact ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (contact[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", contact[i].name);

            printf("Enter New Phone Number: ");
            scanf("%s", contact[i].phone);

            printf("Enter New Email: ");
            scanf("%s", contact[i].email);

            printf("\nContact Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nContact Not Found!\n");
}

void deleteContact()
{
    int id, found = 0;

    printf("Enter Contact ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (contact[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                contact[j] = contact[j + 1];
            }

            count--;

            printf("\nContact Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nContact Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}