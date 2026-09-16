#include <stdio.h>

float calculateTotal(float itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    float itemPrice = 250.50;
    int quantity = 3;
    float total;

    total = calculateTotal(itemPrice, quantity);

    printf("Item Price: %.2f\n", itemPrice);
    printf("Quantity: %d\n", quantity);
    printf("Total Bill: %.2f\n", total);

    return 0;
}
