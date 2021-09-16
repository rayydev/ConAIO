#include <iostream>
#include <windows.h>

/*#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
*/


using namespace std;

void menu();

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
        system("cls");
        cout << "test! \n";
        cout << " \n";
    }

    if(selection == 3)
    {
        int optionselect;
        system("cls");
        cout << "Settings \n";
        cout << " \n";
        cout << "1) Change title window \n";
        cin >> optionselect;
        if(optionselect == 0)
        {
            system("cls");
            menu();
        }
        if(optionselect = 1)
        {

        }
    }       
}