# SoftwareQA_Assignment2
<h1>Command Line Interface</h1> 
Develop a command line app that prompts the user to select a function to executeand allows the user to gracefully exit the app when desired. The menu should be displayed after each function(although a GUI is not required, you are permitted to create one) unless the user exits.For now, the app must have the following functionalities.<br>

1.Body Mass Index -Input height in feet and inches. Input weight in pounds.Return BMI value and category: Underweight = <18.5; Normal weight = 18.5–24.9; Overweight = 25–29.9; Obese = BMI of 30 or greater (see formula linked in the Notes & Resources section). <br>

2.Retirement -Input user's current age, annual salary, percentage saved (employer matches 35% of savings). Input desired retirement savings goal. Output what age savings goal will be met. You can assume death at 100 years (therefore, indicate if the savings goal is notmet).<br>
<br>




<h1>Compiling the Application Run</h1>
If you choose to compile the application yourself, rather than using the already existing executable ->
First, open the Command Prompt (cmd) and check to see if g++ is installed using the command ‘g++ --version’. If the version is printed out in the console g++ is correctly installed.
Next, choose a directory you would like to clone the project into and run: <br>
‘git clone https://github.com/SamBoggs1337/SoftwareQA_Assignment2.git’ <br>
(or simply download the project into a folder)<br>
Next, open the command prompt and change directories to the ‘/SoftwareQA_Assignment2’ dir. Now you must compile the application using this g++ command:<br>
‘g++ UI.cpp retirement.cpp BMI.cpp app.cpp -o <Exec. Name>’<br>
Running this will create a new exec. file in the folder called <your chosen exec name>. Simply double-click on the executable and the application will launch and be ready for your usage.<br>
< OR ><br>
If you do not want to re-compile the project -> <br>
	Double click the executable  ‘SoftwareQA_Assignment2/test.exe’<br>

<h1>Compiling and running the Unit Tests with GoogleTest (gtest) </h1>
In order to execute the unit tests, you first must compile and link the files needs<br>
For BMItest.cpp run:<br>
	‘g++ BMI.cpp -c’ <br>
	‘g++ BMItest.cpp -c’<br>
These will create two separates ‘.o’ files that you need use in this command next:<br>
	‘g++ BMI.o BMItest.o -lgtest -lgtest_main -lpthread’<br>
An executable named ‘a.exe’ will be created in the directory. Run this executable to see the output of the unit tests.<br>
**To run the retirement function tests, repeat this process, just replace the file names**
