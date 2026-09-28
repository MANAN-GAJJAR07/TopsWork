#include <iostream>
using namespace std;

class Ticket
{
public:

    Ticket()
    {
        cout << "Ticket booked successfully!" << endl;
    }

    ~Ticket()
    {
        cout << "Saving your ticket..." << endl;
    }
};

int main()
{
    Ticket *ticket = new Ticket();

    cout << "Ticket is being used..." << endl;

    delete ticket;

    cout << "Program continues..." << endl;

    return 0;
}
