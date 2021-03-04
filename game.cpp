#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void game();
int main()
{
    game();
    return 0;
}
void game()
{
    string name;
    int amt;
    int betamt;
    int guess;
    int dice;
    string choice;
    srand(time(0));
    cout << "=====================WELCOME TO CASINO WORLD ============================ \n\n\n\n"
         << endl;
    cout << "HEY!!! Please Enter Your Name :";
    getline(cin, name);
    cout << "Deposit your amount Rs.";
    cin >> amt;
    do
    {
        system("cls");
        cout<<"welcome "<<name<<endl;
        do
        {
            
            cout << "enter your betting amount Rs.";
            cin >> betamt;
            if (betamt > amt)
            {
                cout << "betting amount can't be more than total amount\n"
                     << endl;
                cout << "Kindly re-enter your amount Rs\n";
            }

        } while (betamt > amt);
        do
        {
            cout << "Guess the number between 1 and 10\n";
            cin >> guess;
            if (guess <= 0 || guess > 10)
            {
                cout << "number must be betwenn 1 and 10\n";
                cout << "guess the number again\n";
            }
        } while (guess <= 0 || guess > 10);
        dice = rand() % 10 + 1;
        if (dice == guess)
        {
            cout << "YAY!!!! you won  Rs.\n"
                 << betamt * 10 << endl;
            amt = amt + betamt * 10;
        }
        else
        {
            cout << "SORRYYYY you lost Rs.\n"
                 << betamt << endl;
            amt = amt - betamt;
        }
        cout << "the number was :"
             << dice << endl;
        cout << "your current balance is Rs.\n"
             << amt << endl;
        if (amt == 0)
        {
            cout << "OOPS!!!! you don't have money to play\n";
            break;
        }
        else
        {
            cout << "DO YOU WANT TO PLAY AGAIN ?\n"
                 << endl;
            cin>>choice;
        }
    } while (choice == "yes" || choice == "YES");

    cout << "thanks for playing........";
}
