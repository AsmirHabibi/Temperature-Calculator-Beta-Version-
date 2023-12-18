#include <iostream>
#include <Windows.h>
#include "../Includes/Greet.hpp"
#include "../Includes/Fahrenheit.hpp"
#include "../Includes/thermometer1.hpp"

using namespace std;


    FahrenheitCal::FahrenheitCal()
    {
        system("cls");
        Sleep(1000);
        cout << "Enter Your Your Temperature Value in Fahrenheit: ";
        cin >> F;
        while (!(std::cin >> F)) {
        cin.clear();
        cin.ignore(10000, '\n');  // Ignore a limited number of characters
        cout << "Invalid input. Please enter a valid double: ";
    }
        
        C = (F - 32) * 5 / 9;
        cout << "\nTemperature in Celsius is : " << C;

        Sleep(2000);
        for (;;)
        {
            if (yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y" || yn == "no" || yn == "No" || yn == "n" || yn == "N")
            {
                break;
            }
            else
            {
                cout << "\nSo..., Do you want to Calculate more?" << endl;
                cin >> yn;
            }
        }

        if (yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y")
        {
            FahrenheitCal wqdcad;
        }
        else if (yn == "no" || yn == "No" || yn == "n" || yn == "N")
        {
            cout << "Do you want to go to the main menu?" << endl;
            yn.clear();
            cin >> yn;
            if (yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y")
            {
                system("cls");
                TemperatureAnim1 AWDWaScAD;
                Greet_System asdsad;

            } else {
            cout << "Bye." << endl;
            Sleep(2000);
            exit(0);
            }
            
        }
    }

    FahrenheitCal::~FahrenheitCal(){

    }

// int main()
// {
//     FahrenheitCal f;

//     return 0;
// }