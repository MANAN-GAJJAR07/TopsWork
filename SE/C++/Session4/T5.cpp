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

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username
             << " posted a new story: "
             << storyTitle << endl;
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
    // YouTuber object
    YouTuber y1;

    y1.username = "Manan";
    y1.followers = 5000;
    y1.channelName = "Manan Tech";

    y1.displayProfile();
    y1.uploadVideo("C++ Tutorial");

    cout << endl;

    // Podcaster object
    Podcaster p1;

    p1.username = "Manan";
    p1.followers = 3000;
    p1.podcastName = "Tech Talks";

    p1.displayProfile();
    p1.publishEpisode("OOP Basics");

    cout << endl;

    // Gaming YouTuber object
    GamingYouTuber g1;

    g1.username = "Manan Gaming";
    g1.followers = 10000;
    g1.channelName = "Manan Gaming Channel";

    g1.displayProfile();
    g1.streamGame("GTA V");

    cout << endl;

    // Instagram Influencer object
    InstagramInfluencer i1;

    i1.username = "Manan Instagram";
    i1.followers = 15000;

    i1.displayProfile();
    i1.postStory("New Video Uploaded!");

    return 0;
}
