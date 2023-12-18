#include <iostream>
#include <Windows.h>
#include "../Includes/Greet.hpp"
#include "../Includes/Kelvin.hpp"
#include "../Includes/thermometer1.hpp"

using namespace std;
    void KelvinCal::CtoK(){
        cout << "Enter Your Temperature in Celsius: ";
        cin >> C;
        while (!(std::cin >> C)) {
        cin.clear();
        cin.ignore(10000, '\n');  // Ignore a limited number of characters
        cout << "Invalid input. Please enter a valid double: ";
    }
        K = (C + 273.15);
        cout << "\nTemperature In Kelvin is : "<< K;
    }

    void KelvinCal::FtoK(){
        cout << "Enter Your Temperature in Fahrenheit: " ;
        cin >> F;
        while (!(std::cin >> F)) {
        cin.clear();
        cin.ignore(10000, '\n');  // Ignore a limited number of characters
        cout << "Invalid input. Please enter a valid double: ";
    }
        K2 = (((F - 32)*(5.0/9.0)) + 273.15);
        cout << "\nTemperature In Kelvin is : "<< K2;
    }

    KelvinCal::KelvinCal()
    {
        system("cls");
        Sleep(500);
        cout << "Enter in which Temperature you want to calculate with: " << endl;
        cout << "F = Fahrenheit to Kelvin." << endl;
        cout << "C = Celsius to Kelvin." << endl;
        cin >> cof;
        if (cof == 'F' || cof == 'f')
        {
            FtoK();

        } else if (cof == 'C' || cof == 'c')
        {
            CtoK();

        } else {
            cout << "Wrong Choice! Try Again.\n";
            cin >> cof;
        }
        
         while (!(yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y" || yn == "no" || yn == "No" || yn == "n" || yn == "N"))
        {
            Sleep(2000);
            cout << "\nSo..., Do you want to Calculate more?" << endl;
            cin >> yn;
        }

        if (yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y")
        {
            KelvinCal hhhhh;
        }
        else if (yn == "no" || yn == "No" || yn == "n" || yn == "N")
        {
            cout << "Do you want to go to the main menu?" << endl;
            yn.clear();
            cin >> yn;
            if (yn == "yes" || yn == "Yes" || yn == "y" || yn == "Y")
            {
                system("cls");
                TemperatureAnim1 asdcv;
                Greet_System efsaf;

            } else {
            cout << "Bye." << endl;
            Sleep(2000);
            exit(0);
            }
            
        }
    }

    KelvinCal::~KelvinCal(){

    }

// int main()
// {
//     CelsiusCal c;

//     return 0;
// }