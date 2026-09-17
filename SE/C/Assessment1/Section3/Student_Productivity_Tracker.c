#include <stdio.h>

#define SUBJECTS 3
#define DAYS 7

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void calculateReport(struct StudyLog logs[], int n)
{
    int i, j;
    float total, average;

    printf("\n===== Weekly Report =====\n");

    for (i = 0; i < n; i++)
    {
        total = 0;

        for (j = 0; j < DAYS; j++)
        {
            total = total + logs[i].hours[j];
        }

        average = total / DAYS;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}

void progressChart(struct StudyLog logs[], int n)
{
    int i, j, k;
    int dots;

    printf("\n===== Progress Chart =====\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%s\n", logs[i].subject);

        for (j = 0; j < DAYS; j++)
        {
            dots = (int)logs[i].hours[j];

            printf("Day %d: ", j + 1);

            for (k = 0; k < dots; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}

void saveData(struct StudyLog logs[], int n)
{
    FILE *file;
    int i, j;

    file = fopen("productivity_log.txt", "w");

    if (file == NULL)
    {
        printf("Unable to create file.\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%s", logs[i].subject);

        for (j = 0; j < DAYS; j++)
        {
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("Data saved successfully.\n");
}

int main()
{
    struct StudyLog logs[SUBJECTS] =
    {
        {"C Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"Java", {0, 0, 0, 0, 0, 0, 0}},
        {"Web Development", {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice;
    int i, day;
    float hours;

    do
    {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nSelect Day (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day.\n");
                continue;
            }

            for (i = 0; i < SUBJECTS; i++)
            {
                do
                {
                    printf("Enter study hours for %s: ",
                           logs[i].subject);
                    scanf("%f", &hours);

                    if (hours < 0 || hours > 24)
                    {
                        printf("Enter hours between 0 and 24.\n");
                    }

                } while (hours < 0 || hours > 24);

                logs[i].hours[day - 1] = hours;
            }

            printf("Study hours recorded successfully.\n");
        }
        else if (choice == 2)
        {
            calculateReport(logs, SUBJECTS);
            progressChart(logs, SUBJECTS);
        }
        else if (choice == 3)
        {
            saveData(logs, SUBJECTS);
            printf("Exiting program...\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
