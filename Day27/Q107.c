#include <stdio.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];

    float basicSalary;
    float hra;
    float da;
    float pf;
    float tax;
    float netSalary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();
float calculateNetSalary(struct Employee e);

int main()
{
    int choice;

    while(1)
    {
        printf("\n======================================");
        printf("\n      SALARY MANAGEMENT SYSTEM");
        printf("\n======================================");
        printf("\n1. Add Employee");
        printf("\n2. Display All Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
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
                printf("\nProgram Closed Successfully.\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

float calculateNetSalary(struct Employee e)
{
    return e.basicSalary + e.hra + e.da - e.pf - e.tax;
}

void addEmployee()
{
    if(count == MAX)
    {
        printf("\nDatabase Full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]",emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f",&emp[count].basicSalary);

    printf("Enter HRA: ");
    scanf("%f",&emp[count].hra);

    printf("Enter DA: ");
    scanf("%f",&emp[count].da);

    printf("Enter PF Deduction: ");
    scanf("%f",&emp[count].pf);

    printf("Enter Tax Deduction: ");
    scanf("%f",&emp[count].tax);

    emp[count].netSalary = calculateNetSalary(emp[count]);

    count++;

    printf("\nEmployee Salary Record Added Successfully!\n");
}

void displayEmployees()
{
    if(count==0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n============= Salary Records =============\n");

    for(int i=0;i<count;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nID           : %d",emp[i].id);
        printf("\nName         : %s",emp[i].name);
        printf("\nBasic Salary : %.2f",emp[i].basicSalary);
        printf("\nHRA          : %.2f",emp[i].hra);
        printf("\nDA           : %.2f",emp[i].da);
        printf("\nPF           : %.2f",emp[i].pf);
        printf("\nTax          : %.2f",emp[i].tax);
        printf("\nNet Salary   : %.2f",emp[i].netSalary);
        printf("\n----------------------------------------");
    }
}

void searchEmployee()
{
    int id,found=0;

    printf("\nEnter Employee ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            printf("\nEmployee Found");
            printf("\nName       : %s",emp[i].name);
            printf("\nNet Salary : %.2f",emp[i].netSalary);

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found!\n");
}

void updateEmployee()
{
    int id,found=0;

    printf("\nEnter Employee ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            printf("Enter New Basic Salary: ");
            scanf("%f",&emp[i].basicSalary);

            printf("Enter New HRA: ");
            scanf("%f",&emp[i].hra);

            printf("Enter New DA: ");
            scanf("%f",&emp[i].da);

            printf("Enter New PF: ");
            scanf("%f",&emp[i].pf);

            printf("Enter New Tax: ");
            scanf("%f",&emp[i].tax);

            emp[i].netSalary=calculateNetSalary(emp[i]);

            printf("\nSalary Updated Successfully!\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found!\n");
}

void deleteEmployee()
{
    int id,found=0;

    printf("\nEnter Employee ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            for(int j=i;j<count-1;j++)
            {
                emp[j]=emp[j+1];
            }

            count--;

            printf("\nRecord Deleted Successfully!\n");

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee Not Found!\n");
}