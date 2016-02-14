
/*Write a program that asks for the user’s height, weight, and age,
and then computes clothing sizes according to the following formulas.
• Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9.
• Jacket size (chest in inches) = height times weight divided by 288
and then adjusted by adding one-eighth of an inch for each 10 years over age 30.
(Note that the adjustment only takes place after a full 10 years.
So, there is no adjustment for ages 30 through 39, but one-eighth of an inch is added for age 40.)
• Waist in inches = weight divided by 5.7
and then adjusted by adding one-tenth of an inch for each 2 years over age 28.
(Note that the adjustment only takes place after a full 2 years.
So, there is no adjustment for age 29, but one-tenth of an inch is added for age 30.)
Use functions for each calculation.
Your program should allow the user to repeat this calculation as often as he or she wishes.
*/


#include <iostream>


using namespace std;

void userInput(double& userHeight, double& userWeight, int& userAge);
void hatConversion(double userWeight, double userHeight, double& hatSize);
void jacketConversion(double userHeight, int userAge, double& jacketSize);
void waistConversion(double userWeight, int userAge, double& waistSize);
void thisOutput(double hatSize, double jacketSize, double waistSize);

int main(int argc, char **argv)
{
  double userHeight, userWeight, hatSize, jacketSize, waistSize;
  int userAge;
  bool continueProgram = true;
  char userAnswer;

  while(continueProgram){

    userInput(userHeight, userWeight, userAge);
    hatConversion(userWeight, userHeight, hatSize);
    jacketConversion(userHeight, userAge, jacketSize);
    waistConversion(userWeight, userAge, waistSize);
    thisOutput(hatSize, jacketSize, waistSize);


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

//read in and assign values to variables
void userInput(double& userHeight, double& userWeight, int& userAge){
  cout<<"Input user height: "<<endl;
  cin>>userHeight;
  cout<<"Input user weight: "<<endl;
  cin>>userWeight;
  cout<<"Input user age: "<<endl;
  cin>>userAge;
}

//Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9.
void hatConversion(double userWeight, double userHeight, double& hatSize)
{
  hatSize = (userWeight/userHeight)*2.9;
}

/*• Jacket size (chest in inches) = height times weight divided by 288
and then adjusted by adding one-eighth of an inch for each 10 years over age 30.
(Note that the adjustment only takes place after a full 10 years.
So, there is no adjustment for ages 30 through 39, but one-eighth of an inch is added for age 40.) */
void jacketConversion(double userHeight, int userAge, double& jacketSize)
{
  jacketSize = userHeight/288;
  int adjustment = (userAge-30)/10;
  jacketSize += (1/8)*adjustment;

}

/*• Waist in inches = weight divided by 5.7
and then adjusted by adding one-tenth of an inch for each 2 years over age 28.
(Note that the adjustment only takes place after a full 2 years.
So, there is no adjustment for age 29, but one-tenth of an inch is added for age 30.)*/
void waistConversion(double userWeight, int userAge, double& waistSize)
{
  waistSize = userWeight/5.7;
  int adjustment = (userAge-28)/2;
  waistSize += (1/10)*adjustment;
}

//output conversions
void thisOutput(double hatSize, double jacketSize, double waistSize)
{
  cout<<"Hat size: "<< hatSize << endl;
  cout<<"Jacket size: "<< jacketSize << endl;
  cout << "Waist size: "<< waistSize << endl;
}
