#include <iostream>
//#include <windows.h>

/*#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
*/


using namespace std;

void menu();
void settings();

int main()
{
    //title will be changed in windows
    menu();
}

void menu()
{
    int selection;
    cout << "Welcome to ConAIO\n";
    cout << " \n";
    cout << "1 - Pinger \n";
    cout << "2 - Test Command \n";
    cout << "3 - Settings \n";
    cin >> selection;

    if(selection == 1)
    {
        //here will be pinger!
    }

    if(selection == 2)
    {
        system("clear");
        cout << "test! \n";
        cout << " \n";
    }

    if(selection == 3)
    {
        int optionselect;
        system("clear");
        cout << "Settings \n";
        cout << " \n";
        cout << "0) Back to menu \n";
        cout << "1) Change title window \n";
        cin >> optionselect;
        if(optionselect == 0)
        {
            system("clear");
            menu();
        }
        if(optionselect = 1)
        {
            system("clear");
            cout << "Sorry, but option for changing title for windows is only avable in winodws build :( \n";
            cout << " \n";
            cout << "Type 0 to quit ConAIO \n";
            cout << " \n";
            cin >> optionselect;
        }
        /*else
        {
            cout << "Wrong number! ConAIO closed. \n";
            return;
            
        }
        */
    }          
}