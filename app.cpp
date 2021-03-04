#include <iostream>
#include <cstdlib>
#include "BMI.h"
#include "retirement.h"
#include "UI.h"
#include "string.h"
#include <string>
#include <limits>

using namespace std;

int main()
{
    char userChoice;
    bool quit = false;

    Retirement r;
    BMI b;
    
    
    do 
    {
        displayMenu();
        cin >> userChoice;
        userChoice = toupper(userChoice);

        switch(userChoice) 
        {
        case '1': b.calculateBMI();
        break;
        system("pause");

        case '2': r.caclulateRetirement();
        break;
        system("pause");

        case 'Q': quit = true;
        system("pause");
        break;
        }

    } while (!quit);    

    //std::cout << "Press ENTER to continue...";
    //std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

  return 0;
}
