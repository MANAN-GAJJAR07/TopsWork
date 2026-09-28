#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main()
{
    SocialMediaUser user1;

    user1.username = "Manan";
    user1.followers = 5000;

    user1.displayProfile();

    return 0;
}
