#include <iostream>
#include <iomanip>
#include <string>
#include "BMI.h"
#include "string.h"

using namespace std;

BMI::BMI()
{
    feet = 0;
    inches = 0;
    weight = 0; // lbs
    height = 0;
    bMass = 0;
    compString = " ";
}

int BMI::calculateBMI() 
{
    cout << "You Selected the BMI Calculator, please fill out the following information! \n";
    cout << "\n";
    cout << "What is your height in feet?\n";
    cin >> feet;
    setFeet(feet);

    cout << "\n";
    cout << "What is your remaining height in inches?\n";
    cin >> inches;
    setInches(inches);

    cout << "\n";

    cout << "What is your weight in pounds (lbs)?\n";
    cin >> weight;
    setWeight(weight);


    //height = feetToInches(feet) + inches; // converting feet to inches to have height (inch)
    //bMass = (weight * 703) / (height * height); 

    //getBMIValue(feet, weight, inches, bMass);
    float bmiValue = getBMIValue(feet, weight, inches);
    cout << bmiValue;
    cout << "\n";
    cout << "The BMI for someone who is " << feet << "'" << inches << "\"" << " and weighs " << weight << " is: " << fixed << setprecision(1) << bmiValue << endl;
    cout << endl;

    getWeightCat(bmiValue);

    return bmiValue;
    
}

int BMI::setFeet(int feet)
{
    if(isdigit(feet))
    {
        feet = feet;
    }
    else if(feet > 0 && feet <= 600000)
    {
        feet = feet; 
    }
    else
    {
        feet = 0;
        cout << "You did not input a valid number\n";
    }
    return feet;
    cout << feet;
}

int BMI::setInches(int inches)
{
    if(isdigit(inches))
    {
        inches = inches;
    }
    else if(inches > 0 && inches <= 600000)
    {
        inches = inches;
    }
    else
    {
        inches = 0;
        cout << "You did not input a valid number\n";
    }
    return inches;
}

int BMI::setWeight(int weight)
{
    if(isdigit(weight))
    {
        weight = weight;
    }
    else if(weight > 0 && weight <= 600000)
    {
        weight = weight;
    }
    else
    {
        weight = 0;
        cout << "You did not input a valid number\n";
    }   
    return weight;
}

int BMI::feetToInches(int feet) 
{
    return (feet * 12.0);
}

float BMI::inchesToMeters(int inches)
{
    return (inches * 0.025);
}

float BMI::poundsToKilos(int weight)
{
    return (weight * 0.45);
}

void BMI::getWeightCat(int bmiValue)
{
    compString = to_string(bmiValue);

    if(isNumeric(compString) == true)
    {

        if (bmiValue <= 18.5)
        {
            cout << "Based on your BMI you are Underweight!\n\n";
            cout << "+=======================================================+" << endl;
        }
        else if(bmiValue >= 18.6 && bmiValue <= 24.9)
        {
            cout << "Based on your BMI you are Normal Weight!\n\n";
            cout << "+=======================================================+" << endl;
        }
        else if(bmiValue == 25 && bmiValue <= 29.9)
        {
            cout << "Based on your BMI you are Overweight!\n\n";
            cout << "+=======================================================+" << endl;

        }
        else 
        {
            cout << "Based on your BMI you are Obese!\n\n";
            cout << "+=======================================================+" << endl;

        }
    }
    else 
    {
        cout << "Invalid number please try again";
    }
}

float BMI::getBMIValue(int feet, int weight, int inches)
{
    cout << " we made it here\n\n"; 
    cout << weight << endl;
    // if(!isdigit(feet) || !isdigit(weight) || !isdigit(inches))
    // {
    //     return 0;
    // }

    // 1. convert to kg
    float kg = poundsToKilos(weight);
    // 2. convert feet to inches
    float newInch = feetToInches(feet) + inches;
    // 3. convert inches to meters
    float meter = inchesToMeters(newInch);
    // 4. divide
    float result = kg / (meter * meter);
    return result;
}

bool BMI::isNumeric(std::string compString) 
{
   for (int i = 0; i < compString.length(); i++)
      if (isdigit(compString[i]) == false)
         return false; //when one non numeric value is found, return false
      return true;
}