#include <stdio.h>

#define MAX 100

int arr[MAX];
int size = 0;

void createArray()
{
    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray()
{
    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Array Elements: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insertElement()
{
    int pos, value;

    if (size == MAX)
    {
        printf("Array is Full!\n");
        return;
    }

    printf("Enter Position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid Position!\n");
        return;
    }

    printf("Enter Value: ");
    scanf("%d", &value);

    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    size++;

    printf("Element Inserted Successfully!\n");
}

void deleteElement()
{
    int pos;

    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter Position (1 to %d): ", size);
    scanf("%d", &pos);

    if (pos < 1 || pos > size)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Element Deleted Successfully!\n");
}

void searchElement()
{
    int value, found = 0;

    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter Element to Search: ");
    scanf("%d", &value);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            printf("Element Found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element Not Found!\n");
}

void updateElement()
{
    int pos, value;

    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter Position (1 to %d): ", size);
    scanf("%d", &pos);

    if (pos < 1 || pos > size)
    {
        printf("Invalid Position!\n");
        return;
    }

    printf("Enter New Value: ");
    scanf("%d", &value);

    arr[pos - 1] = value;

    printf("Element Updated Successfully!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== ARRAY OPERATIONS ==========\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Update Element\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createArray();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                insertElement();
                break;

            case 4:
                deleteElement();
                break;

            case 5:
                searchElement();
                break;

            case 6:
                updateElement();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}