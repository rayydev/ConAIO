#include <iostream>
//#include <windows.h>

using namespace std;

int main()
{
    //title will be changed in windows
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
        system("clear");
        cout << "Settings \n";
    }
    else 
    {
        //system("clear");
        //cout << "Wrong Number! \n";
        //cout << " \n";
        
        //return 0;
    }
}