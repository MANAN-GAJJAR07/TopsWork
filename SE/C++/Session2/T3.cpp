#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;

        cout << "Order " << orderId
             << " has been delivered." << endl;
    }
};

int main()
{
    FoodOrder order1;

    order1.orderId = 101;
    order1.restaurantName = "Cloud Kitchen";
    order1.isDelivered = false;

    cout << "Restaurant: " << order1.restaurantName << endl;
    cout << "Order ID: " << order1.orderId << endl;

    order1.markDelivered();

    cout << "Delivered: " << order1.isDelivered << endl;

    return 0;
}
