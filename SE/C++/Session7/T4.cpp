#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    double price;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter product " << i << ": ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;

        cin.ignore();

        file << product << " - " << price << endl;
    }

    file.close();

    cout << "\nWishlist:\n";

    ifstream readFile("wishlist.txt");

    string line;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
