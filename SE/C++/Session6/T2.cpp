#include <iostream>
using namespace std;

class InstaStory
{
protected:
    int storyViews;

public:
    InstaStory()
    {
        storyViews = 1000;
    }
};

class SponsoredStory : public InstaStory
{
public:
    void displayViews()
    {
        cout << "Story Views: " << storyViews << endl;
    }
};

int main()
{
    SponsoredStory s;

    s.displayViews();

    return 0;
}
