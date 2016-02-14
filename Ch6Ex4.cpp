/*Write the definition for a class named GasPump to be used to model a pump at an automobile service station.
Before you go further with this programming exercise,
write down the behavior you expect from a gas pump from the point of view of the purchaser.

The following are listed things a gas pump might be expected to do.
If your list differs, and you think your list is as good or better than these, then consult your instructor.
You and your instructor should jointly decide what behavior you are to implement.
Then implement and test the agreed upon design for a gas pump class.

a. A display of the amount dispensed - outputAmount()
b. A display of the amount charged for the amount dispensed - outputCharge()
c. A display of the cost per gallon, liter, or other unit of volume that is used where you reside - outputCost()
d. Before use,the gas pump must reset the amount dispensed and amount charged to zero. - resetValues()
e. Once started, a gas pump continues to dispense fuel,
  keep track of the amount dispensed,
  and compute the charge for the amount dispensed until stopped.
f. A stop dispensing control of some kind is needed.
Implement the behavior of the gas pump as declarations of member functions of the gas pump class,
then write implementations of these member functions.
You will have to decide if there is data the gas pump has to keep track of
that the user of the pump should not have access to.
If so, make these private member variables. */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "gaspump.h"

using namespace std;

int main(int args,char* argv[])
{

 GasPump gp;
 double secondsPassed;
 double secondsToDelay = 5;
 char userInput = 'Z';
 bool continueProgram;
 cout<<"Welcome to the gas pump!"<< endl;

 while(userInput!='Y'&& userInput!='N')
 {
   cout<<"Cost of gas: "<<endl;
   gp.outputCost();
   cout<<"Would you like to begin pumping? (Y/N)"<<endl;
   cin>>userInput;
   if(userInput=='N')
     break;
  userInput = 'Z';
  continueProgram=true;
  gp.resetValues();
  while(continueProgram)
  {
    clock_t startTime = clock();
    secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
    //display amount as it goes up giving the user the option to stop filling
    if((int)secondsPassed%10 == 0)
      cout<<"....."<<endl;
    if(((int)secondsPassed)%100 == 0 )
      {
        gp.incrementValues();
        gp.displayCurrent();
      while(userInput!='Y' && userInput!='N')
      {
          cout<<"Continue filling up? (Y/N)"<<endl;
          cin>>userInput;
      }
      if(userInput=='N')
        continueProgram = false;
      userInput = 'Z';
    }
  }
  cout<<"Thanks for filling up!"<<endl;
  cout<<"Amount filled: "<<endl;
  gp.outputAmount();
  cout<< "Charge: "<<endl;
  gp.outputCharge();
}

}
