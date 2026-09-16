#include <stdio.h>

int main()
{
    char teams[4][50] = {
        "RCB",
        "CSK",
        "MI"
    };

    char newTeam[50];

    int choice;
    int teamCount = 3;
    int i;
    int j;

    while (1)
    {
        printf("\n===== IPL MENU =====\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nFavorite IPL Teams:\n");

            for (i = 0; i < teamCount; i++)
            {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if (choice == 2)
        {
            if (teamCount < 4)
            {
                printf("Enter new team: ");
                scanf("%s", newTeam);

                for (j = 0; newTeam[j] != '\0'; j++)
                {
                    teams[teamCount][j] = newTeam[j];
                }

                teams[teamCount][j] = '\0';

                teamCount++;

                printf("Team added successfully!\n");
            }
            else
            {
                printf("Team list is full!\n");
            }
        }
        else if (choice == 3)
        {
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
