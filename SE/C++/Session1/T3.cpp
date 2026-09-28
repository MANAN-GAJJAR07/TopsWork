#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string taskTitle)
    {
        title = taskTitle;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        if (isDone)
        {
            cout << title << " - DONE" << endl;
        }
        else
        {
            cout << title << " - PENDING" << endl;
        }
    }
};

int main()
{
    Task t1("Study C++");

    t1.display();

    t1.markDone();

    t1.display();

    return 0;
}
