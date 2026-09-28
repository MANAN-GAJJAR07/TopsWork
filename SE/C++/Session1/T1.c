#include <stdio.h>

char tasks[5][100];
int taskCount = 0;

int main()
{
    int i;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
        taskCount++;
    }

    printf("\n--- Task List ---\n");

    for (i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
