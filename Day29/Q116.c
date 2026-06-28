#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product product[MAX];
int count = 0;

void addProduct()
{
    if (count == MAX)
    {
        printf("\nInventory Full!\n");
        return;
    }

    printf("Enter Product ID: ");
    scanf("%d", &product[count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", product[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &product[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &product[count].price);

    count++;

    printf("\nProduct Added Successfully!\n");
}

void displayProducts()
{
    if (count == 0)
    {
        printf("\nNo Products Available!\n");
        return;
    }

    printf("\n========== INVENTORY ==========\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Product ID   : %d\n", product[i].id);
        printf("Name         : %s\n", product[i].name);
        printf("Quantity     : %d\n", product[i].quantity);
        printf("Price        : %.2f\n", product[i].price);
    }
}

void searchProduct()
{
    int id, found = 0;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (product[i].id == id)
        {
            printf("\nProduct Found\n");
            printf("Product ID   : %d\n", product[i].id);
            printf("Name         : %s\n", product[i].name);
            printf("Quantity     : %d\n", product[i].quantity);
            printf("Price        : %.2f\n", product[i].price);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nProduct Not Found!\n");
}

void updateProduct()
{
    int id, found = 0;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (product[i].id == id)
        {
            printf("Enter New Product Name: ");
            scanf(" %[^\n]", product[i].name);

            printf("Enter New Quantity: ");
            scanf("%d", &product[i].quantity);

            printf("Enter New Price: ");
            scanf("%f", &product[i].price);

            printf("\nProduct Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nProduct Not Found!\n");
}

void deleteProduct()
{
    int id, found = 0;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (product[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                product[j] = product[j + 1];
            }

            count--;

            printf("\nProduct Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nProduct Not Found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
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