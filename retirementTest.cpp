#include <gtest/gtest.h>
#include "retirement.h"


// testing Gets
TEST(Setting, age)
{
    Retirement r;
    r.setAge(10);
    EXPECT_EQ(10, r.getAge());

}

// too large of age
TEST(Setting, ageInvalid)
{
    Retirement r;
    r.setAge(110);
    EXPECT_EQ(0, r.getAge());

}

// testing Gets
TEST(Setting, salary)
{
    Retirement r;
    r.setSalary(70000);
    EXPECT_EQ(70000, r.getSalary());

}

// too large salary
TEST(Setting, salaryInvalid)
{
    Retirement r;
    r.setSalary(700000);
    EXPECT_EQ(0, r.getSalary());

}

// testing gets
TEST(Setting, perSaved)
{
    Retirement r;
    r.setPerSaved(0.2);
    EXPECT_FLOAT_EQ(0.2, r.getPerSaved());

}

// negative percentage
TEST(Setting, perSavedNeg)
{
    Retirement r;
    r.setPerSaved(-1);
    EXPECT_EQ(0, r.getPerSaved());

}

// testing Gets
TEST(Setting, savingGoal)
{
    Retirement r;
    r.setSavingGoal(100000);
    EXPECT_EQ(100000, r.setSavingGoal(100000));

}

// negative saving
TEST(Setting, savingGoalInvalid)
{
    Retirement r;
    r.setSavingGoal(-100000);
    EXPECT_EQ(0, r.getSavingGoal());

}

// greater than max savings
TEST(OFFPoint, maxSaving)
{
    Retirement r;
    r.setPerSaved(1.5);
    r.setSalary(75000);
    EXPECT_EQ(0, r.getSavingPerYear());
    EXPECT_EQ(0, r.getAgeGoalMet());
    EXPECT_EQ(0, r.getYearsToGoal());
    EXPECT_TRUE(r.isGoalTrue());
}

// perfect input
TEST(ONPoint, maxSaving)
{
    Retirement r;
    r.setPerSaved(0.1);
    r.setAge(30);
    r.setSalary(500000);
    r.setSavingGoal(500000);
    EXPECT_EQ(67500, r.getSavingPerYear());
    EXPECT_EQ(37, r.getAgeGoalMet());
    EXPECT_EQ(7, r.getYearsToGoal());
    EXPECT_TRUE(r.isGoalTrue());
}


int main(int argc, char* argv[])
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
