#include <stdio.h>

int main()
{
    int i;

    // Entry-controlled loop using while
    printf("Entry-Controlled Loop (while):\n");

    i = 10;

    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    printf("While loop did not execute because the condition was false.\n\n");


    // Exit-controlled loop using do-while
    printf("Exit-Controlled Loop (do-while):\n");

    i = 10;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);

    printf("Do-while loop executed once even though the condition was false.\n");

    return 0;
}
