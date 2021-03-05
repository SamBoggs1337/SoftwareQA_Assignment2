# SoftwareQA_Assignment2

<h1>Compiling the Application Run</h1>
If you choose to compile the application yourself, rather than using the already existing executable ->
First, open the Command Prompt (cmd) and check to see if g++ is installed using the command ‘g++ --version’. If the version is printed out in the console g++ is correctly installed.
Next, choose a directory you would like to clone the project into and run: 
‘git clone https://github.com/SamBoggs1337/SoftwareQA_Assignment2.git’
(or simply download the project into a folder)
Next, open the command prompt and change directories to the ‘/SoftwareQA_Assignment2’ dir. Now you must compile the application using this g++ command:
‘g++ UI.cpp retirement.cpp BMI.cpp app.cpp -o <Exec. Name>’
Running this will create a new exec. file in the folder called <your chosen exec name>. Simply double-click on the executable and the application will launch and be ready for your usage.
< OR >
If you do not want to re-compile the project -> 
	Double click the executable  ‘SoftwareQA_Assignment2/test.exe’

<h1>Compiling and running the Unit Tests with GoogleTest (gtest) </h1>
In order to execute the unit tests, you first must compile and link the files needs
For BMItest.cpp run:
	‘g++ BMI.cpp -c’ 
	‘g++ BMItest.cpp -c’
These will create two separates ‘.o’ files that you need use in this command next:
	‘g++ BMI.o BMItest.o -lgtest -lgtest_main -lpthread’
An executable named ‘a.exe’ will be created in the directory. Run this executable to see the output of the unit tests.
**To run the retirement function tests, repeat this process, just replace the file names**
