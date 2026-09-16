#include <stdio.h>

int isEligibleForOffer(int age, float orderValue)
{
    if (age >= 18 && orderValue > 500)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int age = 20;
    float orderValue = 750;

    if (isEligibleForOffer(age, orderValue))
    {
        printf("User is eligible for the offer.\n");
    }
    else
    {
        printf("User is not eligible for the offer.\n");
    }

    return 0;
}
