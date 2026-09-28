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

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

int main()
{
    YouTuber y1;

    y1.username = "Manan";
    y1.followers = 5000;
    y1.channelName = "Manan Tech";

    y1.displayProfile();

    y1.uploadVideo("C++ OOP Tutorial");

    return 0;
}
