#include <gtest/gtest.h>
#include "BMI.h"


TEST(FeetToInchesTest, TwoFeetis24Inches)
{
    BMI b;
    EXPECT_EQ(24, b.feetToInches(2));
}

TEST(FeetToInchesTest, ZeroFeetis0Inches)
{
    BMI b;
    EXPECT_EQ(0, b.feetToInches(0));
}

TEST(FeetToInchesTest, NegFeetis0Inches)
{
    BMI b;
    EXPECT_EQ(0, b.feetToInches(-10));
}

TEST(InchesToMeters, ZeroMeterIs0Inches)
{
    BMI b;
    EXPECT_EQ(0.0, b.inchesToMeters(0));
}

TEST(InchesToMeters, ShouldBe37Meters)
{
    BMI b;
    EXPECT_EQ(36.25, b.inchesToMeters(1450));
}

TEST(PoundsToKilo, OneTwentyToFiftyFour)
{
    BMI b;
    EXPECT_EQ(54, b.poundsToKilos(120));
}

// no height
TEST(ZeroValues, noHeight)
{
    BMI b;
    int feet = b.setFeet(0);
    int weight = b.setWeight(0);
    int inches = b.setInches(1);
    int val = b.getBMIValue(feet, weight, inches);
    EXPECT_EQ(0, val);
}

// over height
TEST(ZeroValues, OverHeight)
{
    BMI b;
    int feet = b.setFeet(15);
    int weight = b.setWeight(2);
    int inches = b.setInches(2);
    int val = b.getBMIValue(feet, weight, inches);
    EXPECT_EQ(0, val);
}

// max weight
TEST(nonZero, maxWeight)
{
    BMI b;
    int feet = b.setFeet(5);
    int weight = b.setWeight(1000);
    int inches = b.setInches(9);
    int val = b.getBMIValue(feet, weight, inches);
    EXPECT_EQ(151, val);
}

// unrealistic entry
TEST(nonZero, unrealisticTest)
{
    BMI* b = new BMI();
    int feet = b->setFeet(1);
    int weight = b->setWeight(50);
    int inches = b->setInches(1);
    int val = b->getBMIValue(feet, weight, inches);
    EXPECT_EQ(213, val);
}


int main(int argc, char* argv[])
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
