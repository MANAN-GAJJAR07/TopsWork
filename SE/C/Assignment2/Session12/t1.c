#include <stdio.h>

struct Playlist
{
    char title[100];
    char artist[100];
    int duration;
};

int main()
{
    struct Playlist song = {
        "Tum Hi Ho",
        "Arijit Singh",
        262
    };

    printf("Song Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);

    return 0;
}
