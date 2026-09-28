#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    Playlist p1;

    p1.name = "My Favorite Songs";
    p1.createdOn = "28-09-2026";
    p1.isPublic = true;

    cout << "Initial Public: " << p1.isPublic << endl;

    p1.togglePublic();
    cout << "After First Toggle: " << p1.isPublic << endl;

    p1.togglePublic();
    cout << "After Second Toggle: " << p1.isPublic << endl;

    return 0;
}
