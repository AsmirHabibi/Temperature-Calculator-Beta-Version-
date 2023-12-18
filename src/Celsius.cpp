#include <iostream>
#include <Windows.h>
#include <limits>
#include <cmath>
#include "../Includes/Greet.hpp"
#include "../Includes/Celsius.hpp"
#include "../Includes/thermometer1.hpp"

using namespace std;


    CelsiusCal::CelsiusCal()
    {
        system("cls"); 
        Sleep(500);
        
        cout << "Enter Your Temperature Value in Celsius: ";
        cin >> C;

        while (!(std::cin >> C)) {
        cin.clear();
        cin.ignore(10000, '\n');  // Ignore a limited number of characters
        cout << "Invalid input. Please enter a valid double: ";
    }
        
        
        F = (C*1.8) + 32;
        cout << "\nTemperature in Fahrenheit is : " << F;
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
            CelsiusCal sdf;
        }
        else if (yn == "no" || yn == "No" || yn == "n" || yn == "N")
        {
            cout << "Do you want to go to the main menu?" << endl;
            yn.clear();
            cin >> yn;
            if (yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y")
            {
                system("cls");
                TemperatureAnim1 AWDWAD;
                Greet_System hh;

            } else {
            cout << "Bye." << endl;
            Sleep(2000);
            exit(0);
            }
            
        }
    }

    CelsiusCal::~CelsiusCal(){

    }

// int main()
// {
//     CelsiusCal c;

//     return 0;
// }