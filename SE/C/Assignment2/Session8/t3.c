#include <stdio.h>

void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;

    printf("Inside function: %d\n", followers);
}

int main()
{
    int followers = 5000;

    increaseFollowersByValue(followers);

    printf("After function: %d\n", followers);

    return 0;
}
