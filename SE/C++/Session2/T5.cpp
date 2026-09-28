#include <iostream>
using namespace std;

struct OrderData
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData data)
    {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;

        cout << "Order " << orderId
             << " has been delivered." << endl;
    }
};

int main()
{
    OrderData data = {
        101,
        "Cloud Kitchen",
        false
    };

    FoodOrder order1(data);

    cout << "Order ID: " << order1.orderId << endl;
    cout << "Restaurant: " << order1.restaurantName << endl;
    cout << "Delivered: " << order1.isDelivered << endl;

    order1.markDelivered();

    cout << "Delivered: " << order1.isDelivered << endl;

    return 0;
}
