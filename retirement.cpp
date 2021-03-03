#include "retirement.h"
#include <iostream>

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