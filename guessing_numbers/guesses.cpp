#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int times_to_predict = 3, actual_ans, user_input;
    srand(time(0));
    actual_ans = rand() % 10;
    cout << "Wellcome in guessing game \n";
    cout << "Guess  number between 1 and 10  \n";
    for (int i = 0; i < times_to_predict; i++)
    {
        cout << "Enter your gueess #" << i + 1 << "\n";
        cin >> user_input;
        if (user_input != actual_ans)
        {
            if (user_input > actual_ans)
            {
                cout << " pridect low! \n";
            }
            else
            {
                cout << " pridect high !\n";
            }
        }
        else
        {
            cout << "You win !\n ";
            break;
        }
    }
}