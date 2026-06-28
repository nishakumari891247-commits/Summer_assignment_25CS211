#include <stdio.h>
#include <math.h>

void addition()
{
    float a, b;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Result = %.2f\n", a + b);
}

void subtraction()
{
    float a, b;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Result = %.2f\n", a - b);
}

void multiplication()
{
    float a, b;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Result = %.2f\n", a * b);
}

void division()
{
    float a, b;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    if (b == 0)
        printf("Division by Zero is Not Possible!\n");
    else
        printf("Result = %.2f\n", a / b);
}

void modulus()
{
    int a, b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    if (b == 0)
        printf("Division by Zero is Not Possible!\n");
    else
        printf("Result = %d\n", a % b);
}

void power()
{
    float a, b;

    printf("Enter Base: ");
    scanf("%f", &a);

    printf("Enter Exponent: ");
    scanf("%f", &b);

    printf("Result = %.2f\n", pow(a, b));
}

void squareRoot()
{
    float n;

    printf("Enter Number: ");
    scanf("%f", &n);

    if (n < 0)
        printf("Square Root of Negative Number is Not Possible!\n");
    else
        printf("Result = %.2f\n", sqrt(n));
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== MENU DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                modulus();
                break;

            case 6:
                power();
                break;

            case 7:
                squareRoot();
                break;

            case 8:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}