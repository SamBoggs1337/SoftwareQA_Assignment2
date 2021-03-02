#include <iostream>
#include <cstdlib>
#include "BMI.h"
#include "retirement.h"
#include "UI.h"

using namespace std;

int main()
{
    char userChoice;
    bool quit = false;
    do 
    {
        displayMenu();
        cin >> userChoice;
        userChoice = toupper(userChoice);

        switch(userChoice) 
        {
        case '1': calculateBMI();
        break;
        system("pause");

        case '2': caclulateRetirement();
        break;
        system("pause");

        case 'Q': quit = true;
        break;

        }

    } while (!quit);
    cout << "Seeya";
    

    
    return 0;
}
