#include <stdio.h>
#include <string.h>

#define MAX 50

int bookId[MAX];
char bookName[MAX][50];
char author[MAX][50];
int quantity[MAX];
int count = 0;

void addBook()
{
    printf("Enter Book ID: ");
    scanf("%d", &bookId[count]);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", bookName[count]);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", author[count]);

    printf("Enter Quantity: ");
    scanf("%d", &quantity[count]);

    count++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    if (count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n========== BOOK LIST ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID  : %d\n", bookId[i]);
        printf("Book Name: %s\n", bookName[i]);
        printf("Author   : %s\n", author[i]);
        printf("Quantity : %d\n", quantity[i]);
    }
}

void searchBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (bookId[i] == id)
        {
            printf("\nBook Found\n");
            printf("Book ID  : %d\n", bookId[i]);
            printf("Book Name: %s\n", bookName[i]);
            printf("Author   : %s\n", author[i]);
            printf("Quantity : %d\n", quantity[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook Not Found!\n");
}

void issueBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (bookId[i] == id)
        {
            found = 1;

            if (quantity[i] > 0)
            {
                quantity[i]--;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook Not Available!\n");
            }

            break;
        }
    }

    if (!found)
        printf("\nBook Not Found!\n");
}

void returnBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (bookId[i] == id)
        {
            quantity[i]++;
            printf("\nBook Returned Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}