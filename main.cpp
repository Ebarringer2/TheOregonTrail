#include <iostream>
#include <class.hpp>
using namespace std;

int main()
{
    Player p = Player();
    
    cout << "Welcome to the Oregon Trail! The expedition will take place over 40 days." << endl;

    while (p.daysLeft > 0)
    {
        p.Update();
    }
}