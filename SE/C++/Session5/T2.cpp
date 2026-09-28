#include <iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content to social media" << endl;
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading Reel/Photo to Instagram" << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading Video to YouTube" << endl;
    }
};

int main()
{
    SocialMediaUploader* instagram = new InstagramUploader();
    SocialMediaUploader* youtube = new YouTubeUploader();

    instagram->uploadContent();
    youtube->uploadContent();

    delete instagram;
    delete youtube;

    return 0;
}
