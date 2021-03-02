#include <iostream>
#include <cstdlib>

using namespace std;


int calculateBMI() 
{
    int feet;
    int inches;
    int weight; // lbs
    int height;
    int BMI;

    cout << "You Selected the BMI Calculator, please fill out the following information! \n";
    cout << "\n";
    cout << "What is your height in feet?\n";
    cin >> feet;
    cout << "\n";
    cout << "What is your remaining height in inches?\n";
    cin >> inches;
    cout << "\n";


    cout << "What is your weight in pounds (lbs)?\n";
    cin >> weight;


    height = (feet * 12) + inches; // converting feet to inches to have height (inch)

    BMI = (weight * 703) / (height * height);

    cout << "\n";
    cout << "The BMI for someone who is " << feet << "'" << inches << "\"" << " and weighs " << weight << " is: " << BMI << endl;

    if (BMI <= 18.5)
    {
        cout << "Based on your BMI you are Underweight!\n";
        return BMI;
    }
    else if(BMI >= 18.6 && BMI <= 24.9)
    {
        cout << "Based on your BMI you are Normal Weight!\n";
    }
    else if(BMI == 25 && BMI <= 29.9)
    {
        cout << "Based on your BMI you are Overweight!\n";
    }
    else 
    {
        cout << "Based on your BMI you are Obese!\n";
    }
    return BMI;
}

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
