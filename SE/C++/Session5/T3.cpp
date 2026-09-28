#include <iostream>
#include <string>
using namespace std;

class ProductSearch
{
public:

    // Search by product name
    void searchProduct(string productName)
    {
        cout << "Searching for product: " << productName << endl;
    }

    // Search by product name and category
    void searchProduct(string productName, string category)
    {
        cout << "Searching for product: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main()
{
    ProductSearch search;

    // Search using product name
    search.searchProduct("Laptop");

    cout << endl;

    // Search using product name and category
    search.searchProduct("Laptop", "Electronics");

    return 0;
}
