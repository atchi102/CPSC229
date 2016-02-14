/*Write a program that converts from 24-hour notation to 12-hour notation.
For example, it should convert 14:25 to 2:25 P.M.
The input is given as two integers.
There should be at least three functions: one for input, one to do the conversion,
and one for output.
Record the A.M./P.M. information as a value of type char, 'A' for A.M. and 'P' for P.M.
Thus, the function for doing the conversions will have a call-by-reference
formal parameter of type char to record whether it is A.M. or P.M.
(The function will have other parameters as well.)
Include a loop that lets the user repeat this computation for new input values
again and again until the user says he or she wants to end the program. */

#include <iostream>


using namespace std;

void userInput(int& givenHour, int& givenMinute, char& timeOfDay);
void conversion(int& newHour, int& newMinute, char& timeOfDay);
void thisOutput(int hour, int minute, char timeOfDay);

int main(int argc, char **argv)
{
  int hour, minute;
  char timeOfDay, userAnswer;
  bool continueProgram = true;

  while(continueProgram){
    userInput(hour, minute, timeOfDay);
    conversion(hour, minute, timeOfDay);
    thisOutput(hour,minute,timeOfDay);
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

//read in time in 24-hour notation and assign to appropriate variables
void userInput(int& givenHour, int& givenMinute, char& timeOfDay)
{
  cout<<"Input hour: "<<endl;
  cin>> givenHour;
  cout<<"Input minute: "<<endl;
  cin>> givenMinute;
  cout<<"Given time: "<< givenHour << ":" << givenMinute << endl;
}

//convert hour to correct time (if <12 subtract 12) and assign AM or PM
void conversion(int& newHour, int& newMinute, char& timeOfDay)
{
  if(newHour>12)
  {
    newHour = newHour-12;
    timeOfDay = 'P';
  }
  else
  {
    if(newHour == 0)
    {
        newHour = 12;
    }
    timeOfDay = 'A';
  }
}

//output converted time
void thisOutput(int hour, int minute, char timeOfDay)
{
  if(timeOfDay == 'A')
    cout << "Converted time: " << hour << ":" << minute<< " A.M" << endl;
  else
    cout << "Converted time: " << hour << ":" << minute<<" P.M" << endl;
}
