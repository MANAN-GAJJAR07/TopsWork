#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor
{
public:

    void processPayment(double amount)
    {
        cout << "Payment without coupon" << endl;
        cout << "Final Amount: " << amount << endl;
    }

    void processPayment(double amount, string couponCode)
    {
        double finalAmount = amount;

        if (couponCode == "SAVE100")
        {
            finalAmount = amount - 100;
        }

        cout << "Payment with coupon: " << couponCode << endl;
        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(500);

    cout << endl;

    p.processPayment(500, "SAVE100");

    return 0;
}
