#include "retirement.h"
#include <iostream>

using namespace std;


Retirement::Retirement()
{
    this->age = 0;
    this->salary = 0;
    this->perSaved = 0.0;
    this->desiredSavings = 0;
    savingPerYear = 0; // spy
    yearsToGoal = 0;
    ageForGoal = 0;
    this->employeeMatch = 1.35;
}


int Retirement::caclulateRetirement()
{

    cout << "You Selected the Retirement Calculator, please fill out the following information! \n";
    cout << "\n";
    while(true) {
        cout << "What is your current age?\n";
        cin >> this->age;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input\n";
        }
        else 
        {
            setAge(this->age);
            break;
        }  
    }

    cout << "\n";
    while(true) {
        cout << "What is your current annual salary?\n";
        cin >> this->salary;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input\n";
        }
        else 
        {
            setSalary(this->salary);
            break;
        }  
    }    
    cout << "\n";

    while(true) {
        cout << "What is your percentage saved as a decimal?\n"; // + 35% employer too
        cin >> this->perSaved;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input\n";
        }
        else 
        {
            setPerSaved(this->perSaved);
            break;
        }  
    }   
    cout << "\n";

    while(true) {
        cout << "What is your desired savings goal?\n";
        cin >> this->desiredSavings;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input\n";
        }
        else 
        {
            setSavingGoal(this->desiredSavings);
            break;
        }  
    }       
    cout << "\n";

    savingPerYear = (this->salary * this->perSaved) * employeeMatch;
    yearsToGoal = (this->desiredSavings / savingPerYear);
    ageForGoal = age + yearsToGoal; // output; age for retirement goal

    if (isGoalTrue() != true) {
        cout << "Your savings goal will not be met!\n";
        system("pause");
    }
    else 
    {
        cout << "Your savings goal will be met at age: " << ageForGoal << endl;
        cout << "\n";
        cout << "+=======================================================+" << endl;  
        cout << "\n";
    }
    cout << "-------------------------------";
    return ageForGoal;
}

    int Retirement::getAge()
    {
        return this->age;
    }

    int Retirement::setAge(int age)
    {
        if(isNumeric(to_string(age)))
        {
            age = age;
        }
        if(age > 0 && age <= 100)
        {
            this->age = age;
        }
        else
        {
            this->age = 0;
            cout << "You did not input a valid number\n";
        }
        return this->age;
    }

    int Retirement::getSalary()
    {
        return this->salary;
    }

    int Retirement::setSalary(int salary)
    {
        if(isNumeric(to_string(salary)))
        {
            salary = salary;
        }
        if(salary > 0 && salary <= 600000)
        {
            this->salary = salary;
        }
        else
        {
            this->salary = 0;
            cout << "You did not input a valid number\n";
        }
        return this->salary;
    }

    float Retirement::getPerSaved()
    {
        return this->perSaved;
    }

    float Retirement::setPerSaved(float perSaved)
    {
        if(isNumeric(to_string(perSaved)))
        {
            perSaved = perSaved;
        }
        if(perSaved > 0 && perSaved <= 1.0)
        {
            this->perSaved = perSaved;
        }
        else
        {
            this->perSaved = 0.0;
            cout << "You did not input a valid number\n";

        }
        return this->perSaved;
    }

    int Retirement::getSavingPerYear()
    {
        this->savingPerYear = (this->salary * this->perSaved) * this->employeeMatch;
        //cout << this->salary << endl;
        //cout << this->perSaved << endl;
        //cout << saving << endl;
        return this->savingPerYear;
    }

    int Retirement::getSavingGoal()
    {
        return this->desiredSavings;
    }

    int Retirement::setSavingGoal(int desiredSavings)
    {
        if(isNumeric(to_string(desiredSavings)))
        {
            this->desiredSavings = desiredSavings;
        }
        if(desiredSavings > 0)
        {
            this->desiredSavings = desiredSavings;
        }
        else
        {
            this->desiredSavings = 0;
            cout << "You did not input a valid number\n";
        }
        return this->desiredSavings;
    }

    int Retirement::getYearsToGoal()
    {
        //this->savingPerYear = (this->salary * this->perSaved) * employeeMatch;
        //return (this->desiredSavings / this->savingPerYear);
        //cout << this->desiredSavings << endl;
        //cout << getSavingPerYear() << endl;

        return this->savingPerYear > 0 ? (this->getSavingGoal() / this->getSavingPerYear()) : 0;
    }

   int Retirement::getAgeGoalMet()
   {
       return (this->age + getYearsToGoal());
   }

   bool Retirement::isGoalTrue()
   {
       return getAgeGoalMet() < 100 ? true : false;
   }

bool Retirement::isNumeric(std::string compString) 
{
   for (int i = 0; i < compString.length(); i++)
      if (isdigit(compString[i]) == false)
         return false; //when one non numeric value is found, return false
      return true;
}