#include <iostream>
#include <cstdlib>
#include "BMI.h"

using namespace std;

int caclulateRetirement()
{
    int age;
    int salary;
    float perSaved;
    int desiredSavings;
    int savingPerYear; // spy
    int yearsToGoal;
    int ageForGoal;

    cout << "You Selected the Retirement Calculator, please fill out the following information! \n";
    cout << "\n";
    cout << "What is your current age?\n";
    cin >> age;

    cout << "\n";
    cout << "What is your current annual salary?\n";
    cin >> salary;
    cout << "\n";

    cout << "What is your percentage saved as a decimal?\n"; // + 35% employer too
    cin >> perSaved;
    cout << "What is your desired savings goal?\n";
    cin >> desiredSavings;

    savingPerYear = (salary * perSaved) * 1.35;
    yearsToGoal = (desiredSavings / savingPerYear);
    ageForGoal = age + yearsToGoal; // output; age for retirement goal

}

void displayMenu()
{
cout << "+-------------------------------------+" << endl;
cout << "| Assignment 2 Software QA |" << endl;
cout << "|=====================================|" << endl;
cout << "| Select: |" << endl;
cout << "| 1 => Caclulate your BMI |" << endl;
cout << "| 2 => Calculate your retirement |" << endl;
cout << "|-------------------------------------|" << endl;
cout << "| Q => Quit |" << endl;
cout << "+-------------------------------------+" << endl;
cout << endl;
cout << "Choice => ";
}

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
