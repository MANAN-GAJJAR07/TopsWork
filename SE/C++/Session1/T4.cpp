#include <iostream>
#include <vector>
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

class TaskList
{
public:
    vector<Task> tasks;

    void addTask(string title)
    {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index)
    {
        tasks[index].markDone();
    }

    void showTasks()
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Study C++");
    list.addTask("Complete assignment");
    list.addTask("Practice OOP");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}
