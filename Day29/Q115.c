#include <stdio.h>
#include <string.h>

char str1[100], str2[100];

void inputStrings()
{
    printf("Enter First String: ");
    scanf(" %[^\n]", str1);

    printf("Enter Second String: ");
    scanf(" %[^\n]", str2);
}

void stringLength()
{
    printf("Length of First String : %lu\n", strlen(str1));
    printf("Length of Second String: %lu\n", strlen(str2));
}

void stringCopy()
{
    char copy[100];

    strcpy(copy, str1);

    printf("Copied String: %s\n", copy);
}

void stringConcatenate()
{
    char temp[200];

    strcpy(temp, str1);
    strcat(temp, str2);

    printf("Concatenated String: %s\n", temp);
}

void stringCompare()
{
    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Both Strings are Equal.\n");
    else if (result > 0)
        printf("First String is Greater.\n");
    else
        printf("Second String is Greater.\n");
}

void stringReverse()
{
    char rev[100];
    int len = strlen(str1);

    for (int i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }

    rev[len] = '\0';

    printf("Reversed String: %s\n", rev);
}

void checkPalindrome()
{
    char rev[100];
    int len = strlen(str1);

    for (int i = 0; i < len; i++)
    {
        rev[i] = str1[len - i - 1];
    }

    rev[len] = '\0';

    if (strcmp(str1, rev) == 0)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");
}

int main()
{
    int choice;

    inputStrings();

    while (1)
    {
        printf("\n========== STRING OPERATIONS ==========\n");
        printf("1. Display String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse First String\n");
        printf("6. Check Palindrome\n");
        printf("7. Enter New Strings\n");
        printf("8. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                stringLength();
                break;

            case 2:
                stringCopy();
                break;

            case 3:
                stringConcatenate();
                break;

            case 4:
                stringCompare();
                break;

            case 5:
                stringReverse();
                break;

            case 6:
                checkPalindrome();
                break;

            case 7:
                inputStrings();
                break;

            case 8:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}