#include <stdio.h>

int main()
{
    int choice;

    printf("Select your meal time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Suggestion: Try some Masala Dosa!\n");
            break;

        case 2:
            printf("Suggestion: Try some Gujarati Thali!\n");
            break;

        case 3:
            printf("Suggestion: Try some Paneer Butter Masala with Naan!\n");
            break;

        case 4:
            printf("Suggestion: Try some Samosa!\n");
            break;

        default:
            printf("Try some fruits!\n");
    }

    return 0;
}
