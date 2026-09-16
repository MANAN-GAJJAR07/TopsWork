#include <stdio.h>

int main()
{
    char productName[] = "Samsung Mobile";
    float price = 24999.50;
    double rating = 4.5;

    printf("Product Name: %s\n", productName);
    printf("Data Type: char array\n\n");

    printf("Price: %.2f\n", price);
    printf("Data Type: float\n\n");

    printf("Rating: %.1lf\n", rating);
    printf("Data Type: double\n");

    return 0;
}
