/*A liter is 0.264179 gallons.
Write a program that will read in the number of liters of gasoline
consumed by the user’s car and the number of miles traveled by the car
and will then output the number of miles per gallon the car delivered.
Your program should allow the user to repeat this calculation as often as the user wishes.
Define a function to compute the number of miles per gallon.
Your program should use a globally defined constant for the number of liters per gallon. */

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
  const double LITER_PER_GALS = 0.264179;
  double litersConsumed = 0;
  double gallonsConsumed = 0;
  double milesTraveled = 0;
  bool continueProgram = true;
  string userAnswer = "";

  while(continueProgram == true){
    cout << "Input number of liters of gasoline consumed: " << endl;
    cin >> litersConsumed;
    cout << "Input miles traveled: " << endl;
    cin >> milesTraveled;

    gallonsConsumed = litersConsumed/LITER_PER_GALS;
    cout<<"Miles per gallon: " << milesTraveled/gallonsConsumed << endl;
    cout<<"Would you like to continue? (Y/N) "<< endl;
    cin >> userAnswer;
    while(userAnswer != "N" && userAnswer != "Y"){
        cout<<"Incorrect input... Would you like to continue? (Y/N) "<< endl;
        cin >> userAnswer;
    }
    if(userAnswer == "N")
      continueProgram = false;
  }


  return 0;
}
