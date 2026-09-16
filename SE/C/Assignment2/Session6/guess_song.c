#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char songs[3][50] = {
        "Believer",
        "Perfect",
        "ShapeOfYou"
    };

    char guess[50];
    int randomNumber;
    int correct = 0;

    srand(time(NULL));

    randomNumber = rand() % 3;

    printf("===== Guess the Song =====\n");
    printf("Guess the song name!\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%s", guess);

        if (strcmp(guess, songs[randomNumber]) == 0)
        {
            printf("Correct! You guessed the song!\n");
            correct = 1;
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while (correct == 0);

    return 0;
}
