#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Believer" << endl;
    file << "Perfect" << endl;
    file << "Shape of You" << endl;
    file << "Blinding Lights" << endl;
    file << "Heat Waves" << endl;

    file.close();

    cout << "Songs saved successfully!" << endl;

    return 0;
}
