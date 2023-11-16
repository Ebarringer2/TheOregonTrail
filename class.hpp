// includes and using
#include <iostream>
#include <string>
using namespace std;

class Player
{
    public:
        string name;
        string occupation;
        bool isSick;
        bool canMove;
        int choice;
        int milesToGo = 500;
        int daysLeft = 40;

    void setName()
    {
        string name;
        cout << "Please Enter a Name: ";    
        cin >> name;
        this->name = name;
    }
    void setChoice()
    {
        int choice;
        cout << "Enter your choice." << endl;
        cout << "1. Travel on the trail" << endl;
        cout << "2. Hunt for food" << endl;
        cout << "3. Take a rest" << endl;
        cout << "4. Trade with the local peoples" << endl;
        cin >> choice;
        if (choice == 1 && !this->canMove)
        {
            cout << "You cannot travel on the trail right now." << endl;
            this->setChoice();
        }
        this->choice = choice;
    }
    void setOccupation()
    {
        string occupation;
        cout << "Choose an occupation." << endl;
        cout << "1. Banker" << endl;
        cout << "2. Farmer" << endl;
        cout << "3. Physician" << endl;
        cout << "4. Carpenter" << endl;
        cout << "5. More details" << endl;
        cin >> occupation;
        if (occupation == "5")
            this->setOccupation();
        else
        {
            this->occupation = occupation;
            cout << "You have chosen to be a " << this->occupation << endl;
        }
    }
    int checkBools()
    {
        if (isSick)
        {
            return 1;
        } else if (!canMove)
        {
            return 2;
        } else if (isSick && !canMove)
        {
            return 3;
        }
        return 0;
    }
    void Update()
    {
        this->setChoice();
    }  
};