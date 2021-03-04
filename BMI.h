#include "string.h"
#include <string>

#ifndef BMI_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define BMI_H


class BMI;
class BMI {

    private:
    double feet;
    double inches;
    double weight; // lbs
    double height;
    double bMass;
    std::string compString;

    public:
        BMI();
        //BMI(double feet,double inches,double weight,double height,double bMass);

        int calculateBMI();
        int feetToInches(int feet) ;
        float inchesToMeters(int inches);
        float poundsToKilos(int weight);
        void getWeightCat(int bmiValue);
        int setFeet(int feet);
        int setInches(int inches);
        int setWeight(int weight);
        float getBMIValue(int feet, int weight, int inches);
        bool isNumeric(std::string compString);;


};
#endif