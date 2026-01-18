#include <stdio.h>
#define PRODUCTS 5
#define SALESPERSONS 4

int main()
{
    int SalespersonTotal = 0;
    int productTotal = 0;
    int products, salesPerson;
    int sales[PRODUCTS][SALESPERSONS] = {0};
    for (products = 0; products < PRODUCTS; products++) // Input sales of products
    {
        for (salesPerson = 0; salesPerson < SALESPERSONS; salesPerson++)
        {
            printf("Enter total dollar value earned by Salesperson %d for Product %d\n> ",salesPerson + 1, products + 1);
            scanf("%d", &sales[products][salesPerson]);
        }
    }

    printf("Salesperson\t");
    for (salesPerson = 1; salesPerson <= SALESPERSONS; salesPerson++)
    {
        printf("%d\t", salesPerson); // prints salesperson number on top of the row
    }
    printf("Product Total");
    printf("\n"); // newline to start writing products from next row

    for (products = 0; products < PRODUCTS; products++) // Prints data in tabular format
    {
        productTotal = 0; // total intialized to zero for each sum
        printf("Product %d\t", products + 1);
        for (salesPerson = 0; salesPerson < 4; salesPerson++)
        {
            printf("%d\t", sales[products][salesPerson]);
            productTotal += sales[products][salesPerson];
        }
        printf("%d", productTotal);
        printf("\n"); // newline so that next product starts from next row
    }
    printf("Person total   ");
    for (salesPerson = 0; salesPerson < SALESPERSONS; salesPerson++)
    {
        SalespersonTotal = 0; // total intialized to zero for each sum
        for (products = 0; products < PRODUCTS; products++)
        {
            SalespersonTotal += sales[products][salesPerson];
        }
        printf("%d\t", SalespersonTotal);
    }

    return 0;
}
