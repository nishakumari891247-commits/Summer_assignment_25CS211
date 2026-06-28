#include <stdio.h>
#include <string.h>

#define MAX 50

int empId[MAX];
char empName[MAX][50];
char department[MAX][50];
float salary[MAX];
int count = 0;

void addEmployee()
{
    printf("Enter Employee ID: ");
    scanf("%d", &empId[count]);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName[count]);

    printf("Enter Department: ");
    scanf(" %[^\n]", department[count]);

    printf("Enter Salary: ");
    scanf("%f", &salary[count]);

    count++;

    printf("\nEmployee Added Successfully!\n");
}

void displayEmployees()
{
    if (count == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n========== EMPLOYEE LIST ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", empId[i]);
        printf("Name        : %s\n", empName[i]);
        printf("Department  : %s\n", department[i]);
        printf("Salary      : %.2f\n", salary[i]);
    }
}

void searchEmployee()
{
    int id, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (empId[i] == id)
        {
            printf("\nEmployee Found\n");
            printf("Employee ID : %d\n", empId[i]);
            printf("Name        : %s\n", empName[i]);
            printf("Department  : %s\n", department[i]);
            printf("Salary      : %.2f\n", salary[i]);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

void updateEmployee()
{
    int id, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (empId[i] == id)
        {
            printf("Enter New Employee Name: ");
            scanf(" %[^\n]", empName[i]);

            printf("Enter New Department: ");
            scanf(" %[^\n]", department[i]);

            printf("Enter New Salary: ");
            scanf("%f", &salary[i]);

            printf("\nEmployee Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

void deleteEmployee()
{
    int id, found = 0;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (empId[i] == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                empId[j] = empId[j + 1];
                strcpy(empName[j], empName[j + 1]);
                strcpy(department[j], department[j + 1]);
                salary[j] = salary[j + 1];
            }

            count--;

            printf("\nEmployee Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== MINI EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}