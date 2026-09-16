#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[], char initials[])
{
    int i = 0;

    initials[0] = toupper(name[0]);

    while(name[i] != '\0')
    {
        if(name[i] == ' ')
        {
            initials[1] = toupper(name[i + 1]);
            break;
        }

        i++;
    }

    initials[2] = '\0';
}

int main()
{
    char name[] = "Virat Kohli";
    char initials[3];

    getUserInitials(name, initials);

    printf("Initials: %s", initials);

    return 0;
}
