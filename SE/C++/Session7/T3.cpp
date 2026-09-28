#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string song;

    cout << "Enter a new song: ";
    getline(cin, song);

    ofstream file("my_fav_songs.txt", ios::app);

    file << song << endl;

    file.close();

    cout << "Song added successfully!" << endl;

    return 0;
}
