#include <stdio.h>
#include <string.h>

#define MAX 100


struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};


struct Employee emp[MAX];
int count = 0;


void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main()
{
    int choice;

    while (1)
    {
        printf("\n====================================");
        printf("\n EMPLOYEE MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Add Employee");
        printf("\n2. Display All Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
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
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}


void addEmployee()
{
    if(count == MAX)
    {
        printf("\nEmployee List is Full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("\nEmployee Added Successfully!\n");
}


void displayEmployees()
{
    if(count == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n========== Employee List ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nEmployee %d", i + 1);
        printf("\nID         : %d", emp[i].id);
        printf("\nName       : %s", emp[i].name);
        printf("\nDepartment : %s", emp[i].department);
        printf("\nSalary     : %.2f", emp[i].salary);
        printf("\n-------------------------------");
    }
}

void searchEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(emp[i].id == id)
        {
            printf("\nEmployee Found");
            printf("\nID         : %d", emp[i].id);
            printf("\nName       : %s", emp[i].name);
            printf("\nDepartment : %s", emp[i].department);
            printf("\nSalary     : %.2f", emp[i].salary);

            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("\nEmployee Not Found!\n");
    }
}


void updateEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(emp[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);

            printf("Enter New Department: ");
            scanf(" %[^\n]", emp[i].department);

            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);

            printf("\nEmployee Updated Successfully!");

            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("\nEmployee Not Found!\n");
    }
}


void deleteEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(emp[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            count--;

            printf("\nEmployee Deleted Successfully!");

            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("\nEmployee Not Found!\n");
    }
}