#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct MovieShow
{
    char Movie[100];
    int Screen;
    struct Time time;
};

int main()
{
    struct MovieShow show =
    {
        "Avengers",
        3,
        {18, 30}
    };

    printf("Movie: %s\n", show.Movie);
    printf("Screen: %d\n", show.Screen);
    printf("Time: %02d:%02d\n",
           show.time.hours,
           show.time.minutes);

    return 0;
}
