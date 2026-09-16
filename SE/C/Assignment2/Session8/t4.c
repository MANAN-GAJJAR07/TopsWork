#include <stdio.h>

void formatPrice(int price)
{
    if(price >= 100000)
    {
        printf("%d,%02d,%03d", price / 100000,
               (price / 1000) % 100,
               price % 1000);
    }
    else if(price >= 1000)
    {
        printf("%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        printf("%d", price);
    }
}

int main()
{
    printf("Laptop: ");
    formatPrice(59999);

    printf("\nMobile: ");
    formatPrice(15999);

    printf("\nMouse: ");
    formatPrice(799);

    return 0;
}
