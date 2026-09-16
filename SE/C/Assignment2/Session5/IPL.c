#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "MI") == 0)
    {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "CSK") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "RCB") == 0)
    {
        printf("Play Bold with Royal Challengers Bengaluru!\n");
    }
    else if (strcmp(team, "KKR") == 0)
    {
        printf("Come on Kolkata Knight Riders!\n");
    }
    else if (strcmp(team, "GT") == 0)
    {
        printf("Go Gujarat Titans!\n");
    }
    else if (strcmp(team, "RR") == 0)
    {
        printf("Halla Bol! Rajasthan Royals!\n");
    }
    else if (strcmp(team, "SRH") == 0)
    {
        printf("Orange Army! Sunrisers Hyderabad!\n");
    }
    else if (strcmp(team, "PBKS") == 0)
    {
        printf("Let's go Punjab Kings!\n");
    }
    else if (strcmp(team, "DC") == 0)
    {
        printf("Come on Delhi Capitals!\n");
    }
    else if (strcmp(team, "LSG") == 0)
    {
        printf("Go Lucknow Super Giants!\n");
    }
    else
    {
        printf("Team not found!\n");
    }

    return 0;
}
