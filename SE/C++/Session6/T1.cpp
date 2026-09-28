#include <iostream>
#include <string>
using namespace std;

class Song
{
private:
    string title;
    string artist;

public:

    // Setter for title
    void setTitle(string t)
    {
        title = t;
    }

    // Getter for title
    string getTitle()
    {
        return title;
    }

    // Setter for artist
    void setArtist(string a)
    {
        artist = a;
    }

    // Getter for artist
    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song s;

    s.setTitle("Believer");
    s.setArtist("Imagine Dragons");

    cout << "Song: " << s.getTitle() << endl;
    cout << "Artist: " << s.getArtist() << endl;

    // Updating title
    s.setTitle("Thunder");

    cout << "Updated Song: " << s.getTitle() << endl;

    return 0;
}
