#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[100];
    char author[100];
    int quantity;
};

struct Book book[MAX];
int count = 0;

void addBook()
{
    if (count == MAX)
    {
        printf("\nLibrary is Full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &book[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[count].author);

    printf("Enter Quantity: ");
    scanf("%d", &book[count].quantity);

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
        printf("Book ID   : %d\n", book[i].id);
        printf("Title     : %s\n", book[i].title);
        printf("Author    : %s\n", book[i].author);
        printf("Quantity  : %d\n", book[i].quantity);
    }
}

void searchBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (book[i].id == id)
        {
            printf("\nBook Found\n");
            printf("Book ID   : %d\n", book[i].id);
            printf("Title     : %s\n", book[i].title);
            printf("Author    : %s\n", book[i].author);
            printf("Quantity  : %d\n", book[i].quantity);
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
        if (book[i].id == id)
        {
            found = 1;

            if (book[i].quantity > 0)
            {
                book[i].quantity--;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook Out of Stock!\n");
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
        if (book[i].id == id)
        {
            book[i].quantity++;
            printf("\nBook Returned Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook Not Found!\n");
}

void deleteBook()
{
    int id, found = 0;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (book[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                book[j] = book[j + 1];
            }

            count--;

            printf("\nBook Deleted Successfully!\n");
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
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");

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
                deleteBook();
                break;

            case 7:
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}