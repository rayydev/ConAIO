#include <iostream>



int main()
{
    int select;
    std::cout << "Welcome to ConAIO launcher. \n";
    std::cout << "1) Run ConAIO \n";
    std::cout << "2) Credits \n";
    std::cout << "3) Exit \n";

    std::cin >> select;
    
    if (select == 1)
    {
        //script
    }
    if (select == 2)
    {
        system("clear");
        std::cout << "Made by rxvyonline (rayydev) in c++ and batch \n";
        return 0;
    }
    if (select == 3)
    {
        return 0;
    }
}