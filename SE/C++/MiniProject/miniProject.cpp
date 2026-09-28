#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// ===============================
// Content Class
// ===============================

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};


// ===============================
// Add Content
// ===============================

void addContent()
{
    Content c;

    cout << "\nEnter content title: ";
    getline(cin, c.title);

    cout << "Enter platform: ";
    getline(cin, c.platform);

    cout << "Enter views: ";
    cin >> c.views;
    cin.ignore();

    cout << "Enter status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    file << c.title << endl;
    file << c.platform << endl;
    file << c.views << endl;
    file << c.status << endl;

    file.close();

    cout << "\nContent added successfully!\n";
}


// ===============================
// View Content
// ===============================

void viewContent()
{
    ifstream file("content_list.txt");

    Content c;
    int number = 1;

    cout << "\n========== CONTENT LIST ==========\n";

    while (getline(file, c.title))
    {
        getline(file, c.platform);

        file >> c.views;
        file.ignore();

        getline(file, c.status);

        cout << number << ". "
             << c.title
             << " - "
             << c.platform
             << endl;

        number++;
    }

    file.close();

    if (number == 1)
    {
        cout << "No content found.\n";
    }
}


// ===============================
// Update Status
// ===============================

void updateStatus()
{
    Content contents[100];

    int count = 0;

    ifstream file("content_list.txt");

    while (getline(file, contents[count].title))
    {
        getline(file, contents[count].platform);

        file >> contents[count].views;
        file.ignore();

        getline(file, contents[count].status);

        count++;
    }

    file.close();

    if (count == 0)
    {
        cout << "\nNo content available.\n";
        return;
    }

    cout << "\n========== CONTENT LIST ==========\n";

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << contents[i].title
             << " - "
             << contents[i].platform
             << endl;
    }

    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;
    cin.ignore();

    if (choice < 1 || choice > count)
    {
        cout << "Invalid content number.\n";
        return;
    }

    cout << "Enter new status: ";
    getline(cin, contents[choice - 1].status);

    ofstream outputFile("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        outputFile << contents[i].title << endl;
        outputFile << contents[i].platform << endl;
        outputFile << contents[i].views << endl;
        outputFile << contents[i].status << endl;
    }

    outputFile.close();

    cout << "\nStatus updated successfully!\n";
}


// ===============================
// Delete Content
// ===============================

void deleteContent()
{
    Content contents[100];

    int count = 0;

    ifstream file("content_list.txt");

    while (getline(file, contents[count].title))
    {
        getline(file, contents[count].platform);

        file >> contents[count].views;
        file.ignore();

        getline(file, contents[count].status);

        count++;
    }

    file.close();

    if (count == 0)
    {
        cout << "\nNo content available.\n";
        return;
    }

    cout << "\n========== CONTENT LIST ==========\n";

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << contents[i].title
             << " - "
             << contents[i].platform
             << endl;
    }

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > count)
    {
        cout << "Invalid content number.\n";
        return;
    }

    ofstream outputFile("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        if (i != choice - 1)
        {
            outputFile << contents[i].title << endl;
            outputFile << contents[i].platform << endl;
            outputFile << contents[i].views << endl;
            outputFile << contents[i].status << endl;
        }
    }

    outputFile.close();

    cout << "\nContent deleted successfully!\n";

    // Display updated list
    viewContent();
}


// ===============================
// Main Menu
// ===============================

int main()
{
    int choice;

    do
    {
        cout << "\n\n";
        cout << "====================================\n";
        cout << "       CREATOR DASHBOARD LITE\n";
        cout << "====================================\n";
        cout << "1. Add Content\n";
        cout << "2. View Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";
        cout << "====================================\n";

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                addContent();
                break;

            case 2:
                viewContent();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                deleteContent();
                break;

            case 5:
                cout << "\nThank you for using Creator Dashboard Lite!\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
