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

class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username
             << " is now streaming "
             << gameName
             << " on "
             << channelName << endl;
    }
};

int main()
{
    GamingYouTuber g1;

    g1.username = "Manan";
    g1.followers = 10000;
    g1.channelName = "Manan Gaming";

    g1.displayProfile();

    g1.uploadVideo("Top 10 Gaming Moments");

    g1.streamGame("GTA V");

    return 0;
}
