#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char text[])
{
    if(text[0] >= 'a' && text[0] <= 'z')
    {
        text[0] = toupper(text[0]);
    }
}

int main()
{
    char product[] = "laptop";
    char username[] = "manan";

    capitalizeFirstLetter(product);
    capitalizeFirstLetter(username);

    printf("Product: %s\n", product);
    printf("Username: %s", username);

    return 0;
}
