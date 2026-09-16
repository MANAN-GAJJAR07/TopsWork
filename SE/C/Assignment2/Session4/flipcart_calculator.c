#include <stdio.h>

int main()
{
    float price = 2000.00;
    float discount = 10.0;
    float discountAmount;
    float finalPrice;
    int isMember = 1;

    // Calculate normal discount
    discountAmount = price * discount / 100;
    finalPrice = price - discountAmount;

    // Extra 5% discount for member
    if (isMember == 1)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Original Price: %.2f\n", price);
    printf("Discount: %.2f%%\n", discount);

    if (isMember == 1)
    {
        printf("Member: Yes\n");
        printf("Extra Discount: 5%%\n");
    }
    else
    {
        printf("Member: No\n");
    }

    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
