#include <stdio.h>

struct Bio
{
    char description[200];
    int age;
};

struct InstaProfile
{
    char username[100];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile profile =
    {
        "manan_gajjar",
        5000,
        {
            "Software Developer and MCA Student",
            22
        }
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}
