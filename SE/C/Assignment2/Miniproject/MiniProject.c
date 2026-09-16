#include <stdio.h>
#include <string.h>

#define DAYS 7

// Function declarations
void logMusic(int minutes[]);
void viewSummary(int minutes[]);
void saveToFile(int minutes[]);
void weeklyReport();
void resetData(int minutes[]);

int main()
{
    int minutes[DAYS] = {0};
    int choice;

    do
    {
        printf("\n========== MUSIC LISTENING LOGGER ==========\n");
        printf("1. Log daily listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Generate weekly report\n");
        printf("4. Reset weekly data\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                logMusic(minutes);
                saveToFile(minutes);
                break;

            case 2:
                viewSummary(minutes);
                break;

            case 3:
                weeklyReport();
                break;

            case 4:
                resetData(minutes);
                break;

            case 5:
                printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}


// Task 1: Enter music listening minutes
void logMusic(int minutes[])
{
    char *days[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    printf("\nEnter music listening minutes:\n");
	int i;
    for (i = 0; i < DAYS; i++)
    {
        printf("%s: ", days[i]);
        scanf("%d", &minutes[i]);
    }

    printf("\nWeekly listening data saved in array.\n");
}


// Task 2: Display weekly summary
void viewSummary(int minutes[])
{
    char *days[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    printf("\n========== WEEKLY SUMMARY ==========\n");
	int i;
    for (i = 0; i < DAYS; i++)
    {
        printf("%s: %d minutes\n", days[i], minutes[i]);
    }
}


// Task 3: Save data into file
void saveToFile(int minutes[])
{
    FILE *file;

    file = fopen("music_log.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
	int i;
    for (i = 0; i < DAYS; i++)
    {
        fprintf(file, "%d\n", minutes[i]);
    }

    fclose(file);

    printf("Data saved successfully to music_log.txt\n");
}


// Task 4: Read file and generate weekly report
void weeklyReport()
{
    FILE *file;
    int minutes[DAYS];
    int total = 0;
    int highest = 0;
    int count = 0;

    file = fopen("music_log.txt", "r");

    if (file == NULL)
    {
        printf("\nNo saved music data found.\n");
        return;
    }

    // Read data from the file
    while (count < DAYS && fscanf(file, "%d", &minutes[count]) == 1)
    {
        count++;
    }

    fclose(file);

    if (count == 0)
    {
        printf("\nNo data available.\n");
        return;
    }
	int i;
    // Calculate total and highest listening time
    for (i = 0; i < count; i++)
    {
        total += minutes[i];

        if (minutes[i] > highest)
        {
            highest = minutes[i];
        }
    }

    float average = (float)total / count;

    printf("\n========== WEEKLY REPORT ==========\n");
    printf("Total listening time   : %d minutes\n", total);
    printf("Average listening time : %.2f minutes\n", average);
    printf("Highest listening time : %d minutes\n", highest);
}


// Task 5: Reset data
void resetData(int minutes[])
{
    char confirmation;

    printf("\nAre you sure you want to delete weekly data? (y/n): ");
    scanf(" %c", &confirmation);

    if (confirmation == 'y' || confirmation == 'Y')
    {
        // Clear array
        int i;
        for (i = 0; i < DAYS; i++)
        {
            minutes[i] = 0;
        }

        // Clear file contents
        FILE *file = fopen("music_log.txt", "w");

        if (file != NULL)
        {
            fclose(file);
        }

        printf("\nWeekly data has been reset successfully.\n");
    }
    else
    {
        printf("\nReset cancelled.\n");
    }
}
