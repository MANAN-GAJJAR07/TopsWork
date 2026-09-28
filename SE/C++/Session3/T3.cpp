#include <iostream>
using namespace std;

class Movie
{
public:
    string movieName;
    string genre;
    float rating;

    Movie(string name, string g, float r)
    {
        movieName = name;
        genre = g;
        rating = r;
    }

    // Copy Constructor
    Movie(const Movie &m)
    {
        movieName = m.movieName;
        genre = m.genre;
        rating = m.rating;
    }

    void display()
    {
        cout << "Movie Name: " << movieName << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << "/10" << endl;
    }
};

int main()
{
    Movie movie1("Interstellar", "Science Fiction", 8.7);

    Movie movie2(movie1);

    cout << "--- Original Movie ---" << endl;
    movie1.display();

    cout << "\n--- Copied Movie ---" << endl;
    movie2.display();

    return 0;
}
