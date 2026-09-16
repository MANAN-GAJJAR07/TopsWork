#include <stdio.h>

int main()
{
    int cricketScores[5][2] =
    {
        {185, 172},
        {210, 198},
        {156, 160},
        {202, 190},
        {175, 180}
    };

    int i;
    int highest;

    for(i = 0; i < 5; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            highest = cricketScores[i][0];
        }
        else
        {
            highest = cricketScores[i][1];
        }

        printf("Match %d highest score = %d\n", i + 1, highest);
    }

    return 0;
}
