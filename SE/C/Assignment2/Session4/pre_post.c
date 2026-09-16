#include <stdio.h>

int main()
{
    int followerCount = 100;

    printf("Initial follower count: %d\n", followerCount);

    // Post-increment
    printf("Post-increment value: %d\n", followerCount++);
    printf("After post-increment: %d\n", followerCount);

    // Pre-increment
    printf("Pre-increment value: %d\n", ++followerCount);
    printf("After pre-increment: %d\n", followerCount);

    return 0;
}
