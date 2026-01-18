#include <stdio.h>

int main()
{
    // RETAIL PRICES
    float product1 = 2.98;
    float product2 = 4.50;
    float product3 = 9.98;
    float product4 = 4.49;
    float product5 = 6.87;
    double totalRetailPrice = 0;

    for (int day = 1; day <= 7; day++) // 7 iterations for 7 days in a week 
    {
        printf("\nSALES OF DAY %d\n", day);
        printf("----------------\n");
        while (1)
        {
            int quantity, productNumber;
            printf("Enter Number of product which has been sold on day %d(-1 to finish day): ",day);// To ask user about product number repeatedly
            scanf("%d", &productNumber);
            if (productNumber == (-1))
            {
                break; //breaks while loop and iterations start for next day.
            }
            else
            {

                switch (productNumber)
                {
                case 1:
                    printf("Enter quantity of product 1 which has been sold in day %d of a week: ", day);
                    scanf("%d", &quantity); // To ask user about quantity of product 1.
                    totalRetailPrice += product1*quantity; // To update total retail price with product's quantity
                    break;
                case 2:
                    printf("Enter quantity of product 2 which has been sold in day %d of a week: ", day);
                    scanf("%d", &quantity);
                    totalRetailPrice += product2*quantity;
                    break;
                case 3:
                    printf("Enter quantity of product 3 which has been sold in day %d of a week: ", day);
                    scanf("%d", &quantity);
                    totalRetailPrice += product3*quantity;
                    break;
                case 4:
                    printf("Enter quantity of product 4 which has been sold in day %d of a week: ", day);
                    scanf("%d", &quantity);
                    totalRetailPrice += product4*quantity;
                    break;
                case 5:
                    printf("Enter quantity of product 5 which has been sold in day %d of a week: ", day);
                    scanf("%d", &quantity);
                    totalRetailPrice += product5*quantity;
                    break;

                default:
                    printf("Enter a valid product number (1-5)\n");
                    break;
                }
            }
        }
    }
    printf("Total retail value of all products sold last week is given as: %.2lf", totalRetailPrice);
    return 0;
}