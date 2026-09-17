#include <stdio.h>

int main()
{
    int a[10];
    int i, j, temp;
    int min, max;
    float sum = 0, mean;
    
    for (i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    min = a[0];
    max = a[0];

    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    mean = sum / 10;

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %.2f\n", mean);

    printf("Sorted array: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    if ((mean - min) < (max - mean))
        printf("Mean is closer to minimum.\n");
    else if ((mean - min) > (max - mean))
        printf("Mean is closer to maximum.\n");
    else
        printf("Mean is exactly midway.\n");

    return 0;
}
