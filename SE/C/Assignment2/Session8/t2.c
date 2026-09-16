#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *count, char product[])
{
	int i;
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart:\n");

    for(i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][50];
    int count = 0;

    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");
    addToCart(cart, &count, "Keyboard");

    return 0;
}
