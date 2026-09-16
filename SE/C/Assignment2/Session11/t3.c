#include <stdio.h>

int main()
{
    int orders[5] = {250, 450, 180, 320, 500};

    int *ptr = orders;
	int i;
    for(i = 0; i < 5; i++)
    {
        printf("Order amount = Rs.%d\tAddress = %p\n",
               *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
