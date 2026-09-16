#include <stdio.h>

float calculateAverage(int orders[], int size)
{
    int sum = 0;
    int i;

    for(i = 0; i < size; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / size;
}

int main()
{
    int orders[7] = {200, 350, 150, 400, 250, 300, 350};

    float average;

    average = calculateAverage(orders, 7);

    printf("Average weekly spending = Rs. %.2f", average);

    return 0;
}
