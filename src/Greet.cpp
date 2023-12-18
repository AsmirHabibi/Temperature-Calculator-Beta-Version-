#include <iostream>
#include <Windows.h>
#include "../Includes/Greet.hpp"
#include "../Includes/Fahrenheit.hpp"
#include "../Includes/Celsius.hpp"
#include "../Includes/Kelvin.hpp"
using namespace std;

Greet_System::Greet_System(){
            cout << "Welcome to The Temperature Calculator(Beta)." << endl;
            Sleep(1000);
            cout << "What Temperature Unit do you want to calculate with?:" << endl;
            cout << "F = Fahrenheit." << endl;
            cout << "C = Celcius/Centigrate." << endl;
            cout << "K = Kelvin." << endl;
            // cout << "A = All In One" << endl;

            do 
            {
                cout << "Enter Input: " << endl;
                cin >> tsb;

            } while (tsb != 'C' && tsb != 'c' && tsb != 'F' && tsb != 'f' && tsb != 'K' && tsb != 'k' /*|| tsb != 'A' || tsb != 'a'*/);
             
            if (tsb == 'C' || tsb == 'c')
            {
                CelsiusCal cccc;

            } else if (tsb == 'F' || tsb == 'f')
            {
                FahrenheitCal a;

            } else if (tsb == 'K' || tsb == 'k')
            {
                KelvinCal dghgfh;

            } /* else if (tsb == 'A' || tsb == 'a')
            {
                // code
                
            } */
            
            
            
        }

Greet_System::~Greet_System(){

}



// int main() {
    
//     return 0;
// }