#include <stdio.h>

char tasks[5][100];
int status[5] = {0, 0, 0, 0, 0};
int taskCount = 0;

void markTaskDone(int index)
{
    status[index] = 1;
}

int main()
{
    int i;
    int index;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
        taskCount++;
    }

    printf("\nEnter task number to mark as DONE: ");
    scanf("%d", &index);

    markTaskDone(index - 1);

    printf("\n--- Updated Task List ---\n");

    for (i = 0; i < taskCount; i++)
    {
        if (status[i] == 1)
        {
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        }
        else
        {
            printf("%d. %s - PENDING\n", i + 1, tasks[i]);
        }
    }

    return 0;
}
