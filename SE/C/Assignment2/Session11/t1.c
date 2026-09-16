#include <stdio.h>

int main()
{
    int likes = 5000;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes = %d\n", likes);
    printf("Address of likes = %p\n", (void *)&likes);
    printf("Address stored in ptrLikes = %p\n", (void *)ptrLikes);
    printf("Value using ptrLikes = %d\n", *ptrLikes);

    return 0;
}
