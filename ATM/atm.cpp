#include <iostream>
using namespace std;
void showText()
{
    cout << "========  ATM system  ========== \n";
    cout << "1. Show the Balance \n";
    cout << "2. Add Money \n";
    cout << "3. Pull from balance \n";
    cout << "4. Exit \n";
}
int main()
{
    showText();
    int choice, balance = 1000, added, input;
    while (choice !=4 )
    {
        cout << "\nChoose the operation you want\n";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Your balance is  " << balance << "\n";
            break;
        case 2:
            cout << "Enter the amount you want to add \n";
            cin >> added;
            if (added > 0)
            {
                balance += added;
                cout << "Your current balance is  " << balance << "\n";
            }
            else
            {
                cout << "Please , Enter valid number\n";
            }

            break;
        case 3:
            cout << "Enter the number you need ";
            cin >> added;
            if (added < balance && added > 0)
            {
                balance -= added;
                cout << "Your current balance is  " << balance << "\n";
            }
            else if (added > balance)
            {
                cout << " Your balance is not enough \n";
            }
            else if (added < 0)
            {
                cout << "Unvalid operation  \n";
            }
        default:
            break;
        }
    }
}