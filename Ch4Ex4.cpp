/*Write a program that will read in a length in feet and inches
and output the equivalent length in meters and centimeters.
Use at least three functions:
one for input, one or more for calculating, and one for output.
Include a loop that lets the user repeat this computation for new input values
until the user says he or she wants to end the program.
There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot. */

#include <iostream>
#include<math.h>

using namespace std;

void userInput(double& feet, double& inches);
void calculations(double feet, double inches, int& meters, double& centimeters);
void thisOutput(double feet, double inches, int meters, double centimeters);

int main(int argc, char **argv)
{
  double centimeters, feet, inches;
  int meters;
  bool continueProgram = true;
  char userAnswer;
  while(continueProgram){

    userInput(feet, inches);
    calculations(feet, inches, meters, centimeters);
    thisOutput(feet, inches, meters, centimeters);


    cout<<"Would you like to continue? (Y/N) "<< endl;
    cin >> userAnswer;
    while(userAnswer != 'N' && userAnswer != 'Y'){
        cout<<"Incorrect input... Would you like to continue? (Y/N) "<< endl;
        cin >> userAnswer;
    }
    if(userAnswer == 'N')
      continueProgram = false;
  }

  return 0;
}

//read in user input of feet and inches
void userInput(double& feet, double& inches)
{
  cout << "Enter two numbers (feet inches): " << endl;
  cin >> feet
      >> inches;
}

//convert inches to total feet and run calculations
//There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
void calculations(double feet, double inches, int& meters, double& centimeters)
{
  double totalFeet = feet + (inches/12);
  cout<<totalFeet<<endl;
  double totalMeters = totalFeet*0.3048;
  cout<<totalMeters<<endl;
  meters = (int) totalMeters;
  cout<<meters<<endl;
  double decimalRemainder = totalMeters- static_cast<double>(meters);
  cout<<decimalRemainder<<endl;
  centimeters = decimalRemainder*100;

}

//output calculations
void thisOutput(double feet, double inches, int meters, double centimeters)
{
  cout << "Given: " << endl;
  cout << "Feet: "<< feet << " Inches: " << inches << endl;
  cout << "Calculated: "<< endl;
  cout << "Meters: "<< meters << " Centimeters: "<< centimeters << endl;

}
