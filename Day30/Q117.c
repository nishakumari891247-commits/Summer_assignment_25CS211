#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

void addStudent()
{
    if (count == MAX)
    {
        printf("\nRecord Full!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;

    printf("\nStudent Record Added Successfully!\n");
}

void displayStudents()
{
    if (count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }
}

void searchStudent()
{
    int r, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for (int i = 0; i < count; i++)
    {
        if (roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

void updateStudent()
{
    int r, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for (int i = 0; i < count; i++)
    {
        if (roll[i] == r)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", name[i]);

            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);

            printf("\nRecord Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

void deleteStudent()
{
    int r, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for (int i = 0; i < count; i++)
    {
        if (roll[i] == r)
        {
            for (int j = i; j < count - 1; j++)
            {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            count--;

            printf("\nRecord Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}