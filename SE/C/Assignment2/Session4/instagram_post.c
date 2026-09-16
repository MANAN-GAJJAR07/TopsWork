#include <stdio.h>

int main()
{
    int likes = 1200;
    int comments = 150;
    int shares = 60;

    if (likes >= 1000 || (comments > 200 && shares >= 50))
    {
        printf("The post is TRENDING.\n");
    }
    else
    {
        printf("The post is NOT TRENDING.\n");
    }

    return 0;
}
