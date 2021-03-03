# SoftwareQA_Assignment2

![image](https://user-images.githubusercontent.com/59849458/109861203-a68f2d00-7c24-11eb-94f2-f8d754f4df62.png)




<h1>Objective</h1>
Apply test-driven development (TDD) to implement a set of software requirements for Software Testing and Quality Assurance - CSE 4283, Mississippi State University - Spring 2021

Write unit tests to provide adequate coverage of a code-base using chosen unit testing framework and test runner.

<h1>Requirements</h1>
Develop a CLI or GUI app that prompts the user to select a function to execute and allows the user to gracefully exit the app when desired.

The menu should be displayed after each function (if app is CLI) unless the user exits. For now, the app must have the following functionalities:

Body Mass Index - Input height in feet and inches. Input weight in pounds. Return BMI value and category:
If BMI falls below 18.5, it falls within the underweight range.
If BMI is between 18.5 to 24.9, it falls within the normal or Healthy Weight range.
If BMI is 25.0 to 29.9, it falls within the overweight range.
If BMI is 30.0 or higher, it falls within the obese range.

Retirement - Input user's current age, annual salary, percent saved (employer matches 35% of savings). Input desired retirement savings goal. Output what age savings goal will be met. You can assume death at 100 years (therefor, indicate if the savings goal is not met).
Notes & Resources
BMI Formula - http://extoxnet.orst.edu/faqs/dietcancer/web2/twohowto.html
Remember, unit tests serve as documentation - your tests should indicate the features of the program

<h1> How to Run the application </h1>
1. To compile the application on Windows 10 you must first have Mingw-w64. 
2. Once installed you must add the 'mingw64/bin' to your PATH env variables in Windows 10
3. Check the versions in command prompt using 'g++ --version AND gdb --version' if the output is not what was expected then you have not correctly completed step 2.
4. Next, once you have confirmed that MinGW is installed, open command prompt and change your directory to the location of the application files
5. Run this command in order to compile the program 'g++ app.cpp BMI.cpp retirement.cpp UI.cpp -o <desired exec name>'
6. Double click/run the executable created in that folder, the app will then begin running
