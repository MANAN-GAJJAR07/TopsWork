#include <stdio.h>

int main()
{
    float hours[7];
    float total = 0;
    float average;
    int highestDay = 0;
    int i, j, stars;

    for (i = 0; i < 7; i++)
    {
        do
        {
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &hours[i]);

            if (hours[i] < 0 || hours[i] > 24)
            {
                printf("Invalid input. Enter hours between 0 and 24.\n");
            }

        } while (hours[i] < 0 || hours[i] > 24);

        total = total + hours[i];
    }

    average = total / 7;

    for (i = 1; i < 7; i++)
    {
        if (hours[i] > hours[highestDay])
        {
            highestDay = i;
        }
    }

    printf("\nWeekly Total: %.2f hours\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Highest Study Hours: Day %d (%.2f hours)\n",
           highestDay + 1, hours[highestDay]);

    printf("\nStudy Progress:\n");

    for (i = 0; i < 7; i++)
    {
        stars = (int)hours[i];

        printf("Day %d: ", i + 1);

        for (j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
