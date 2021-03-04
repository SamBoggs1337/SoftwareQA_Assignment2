#include "retirement.h"
#include <iostream>

using namespace std;


Retirement::Retirement()
{
    age = 0;
    salary = 0;
    perSaved = 0.0;
    desiredSavings = 0;
    savingPerYear = 0; // spy
    yearsToGoal = 0;
    ageForGoal = 0;
    employeeMatch = 1.35;
}


int Retirement::caclulateRetirement()
{

    cout << "You Selected the Retirement Calculator, please fill out the following information! \n";
    cout << "\n";
    cout << "What is your current age?\n";
    cin >> age;
    setAge(age);

    cout << "\n";
    cout << "What is your current annual salary?\n";
    cin >> salary;
    setSalary(salary);
    cout << "\n";

    cout << "What is your percentage saved as a decimal?\n"; // + 35% employer too
    cin >> perSaved;
    setPerSaved(perSaved);
    cout << "\n";

    cout << "What is your desired savings goal?\n";
    cin >> desiredSavings;
    setSavingGoal(desiredSavings);
    cout << "\n";

    savingPerYear = (salary * perSaved) * employeeMatch;
    yearsToGoal = (desiredSavings / savingPerYear);
    ageForGoal = age + yearsToGoal; // output; age for retirement goal

    // if (isGoalTrue() != true) {
    //     cout << "Your savings goal will not be met!\n";
    //     system("pause");
    // }
    // else 
    // {
        cout << "Your savings goal will be met at age: " << ageForGoal << endl;
        cout << "\n";
        cout << "+=======================================================+" << endl;  
        cout << "\n";
    //}
    cout << "-------------------------------";
    return ageForGoal;
}

    int Retirement::getAge()
    {
        return age;
    }

    int Retirement::setAge(int age)
    {
        if(isdigit(age))
        {
            age = age;
        }
        else if(age > 0 && age <= 100)
        {
            age = age;
        }
        else
        {
            age = 0;
            cout << "You did not input a valid number\n";
        }
        return age;
    }

    int Retirement::getSalary()
    {
        return salary;
    }

    int Retirement::setSalary(int salary)
    {
        if(isdigit(salary))
        {
            salary = salary;
        }
        else if(salary > 0 && salary <= 600000)
        {
            salary = salary;
        }
        else
        {
            salary = 0;
            cout << "You did not input a valid number\n";
        }
        return salary;
    }

    int Retirement::getPerSaved()
    {
        return perSaved;
    }

    int Retirement::setPerSaved(int perSaved)
    {
        if(isNumeric(to_string(perSaved)))
        {
            perSaved = perSaved;
        }
        else if(perSaved > 0 && perSaved <= 1.0)
        {
            perSaved = perSaved;
        }
        else
        {
            perSaved = 0;
            cout << "You did not input a valid number\n";

        }
        return perSaved;
    }

    int Retirement::getSavingPerYear()
    {
        return (salary * perSaved) * employeeMatch;
    }

    int Retirement::getSavingGoal()
    {
        return desiredSavings;
    }

    int Retirement::setSavingGoal(int desiredSavings)
    {
        if(isNumeric(to_string(desiredSavings)))
        {
            desiredSavings = desiredSavings;
        }
        else if(desiredSavings > 0)
        {
            desiredSavings = desiredSavings;
        }
        else
        {
            desiredSavings = 0;
            cout << "You did not input a valid number\n";
        }
        return desiredSavings;
    }

    int Retirement::getYearsToGoal()
    {
        return getSavingPerYear() > 0 ? (getSavingGoal() / getSavingPerYear()) : 0;

    }

   int Retirement::getAgeGoalMet()
   {
       return (!isdigit(getYearsToGoal())) ? age + getYearsToGoal() : 0;
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