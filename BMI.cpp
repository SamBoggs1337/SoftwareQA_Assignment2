#include <iostream>
#include "BMI.h"

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