#include <iostream>
#include <vector>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    vector<string> songs;

    void addSong(string songTitle)
    {
        songs.push_back(songTitle);
    }

    void displaySongs()
    {
        cout << "\n--- Songs ---" << endl;

        for (int i = 0; i < songs.size(); i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist p1;

    p1.name = "My Playlist";
    p1.createdOn = "28-09-2026";
    p1.isPublic = true;

    p1.addSong("Perfect");
    p1.addSong("Believer");
    p1.addSong("Blinding Lights");

    p1.displaySongs();

    return 0;
}
