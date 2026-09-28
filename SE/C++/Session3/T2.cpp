#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
    float price;
    float rating;

    Product(string name, float p, float r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo()
    {
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

int main()
{
    Product p1("Wireless Mouse", 799, 4.5);

    p1.displayInfo();

    return 0;
}
