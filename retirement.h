#include "string.h"
#include <string>

#ifndef RETIREMENT_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define RETIREMENT_H 

class Retirement;

class Retirement {

    private:
    int age ;
    int salary ;
    float perSaved;
    int desiredSavings;
    double savingPerYear; // spy
    int yearsToGoal;
    int ageForGoal;
    float employeeMatch;
    std::string compString;


    public:
        Retirement();
        //Retirement(int age,int salary,double perSaved,int desiredSavings, int savingPerYear,int yearsToGoal,int ageForGoal, int employeeMatch);

        int caclulateRetirement();
        int getAge();
        int setAge(int age);
        int getSalary();
        int setSalary(int salary);
        float getPerSaved();
        float setPerSaved(float perSaved);
        int getSavingPerYear();
        int getSavingGoal();
        int setSavingGoal(int desiredSavings);
        int getYearsToGoal();
        int getAgeGoalMet();
        bool isGoalTrue();
        bool isNumeric(std::string compString);;

};

#endif