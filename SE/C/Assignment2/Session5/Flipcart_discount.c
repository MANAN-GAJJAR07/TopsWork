#include <stdio.h>

int main()
{
    float amount;
    float discount;
    float discountAmount;
    float finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000)
    {
        discount = 20;

        discountAmount = amount * discount / 100;
        finalAmount = amount - discountAmount;

        printf("20%% discount applied.\n");
    }
    else
    {
        if (amount > 1000)
        {
            discount = 10;

            discountAmount = amount * discount / 100;
            finalAmount = amount - discountAmount;

            printf("10%% discount applied.\n");
        }
        else
        {
            discount = 0;
            discountAmount = 0;
            finalAmount = amount;

            printf("No discount applied.\n");
        }
    }

    printf("Cart Amount: %.2f\n", amount);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}
