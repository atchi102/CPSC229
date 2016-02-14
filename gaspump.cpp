#include <iostream>
#include "gaspump.h"

using namespace std;

GasPump::GasPump(){
  gasAmount = 0;
  amountCharged = 0;
  costPerGallon = 2.643;
}

void GasPump::outputAmount()
{
  cout<<amountCharged<<endl;
}

void GasPump::outputCharge()
{
  cout<<amountCharged<<endl;
}

void GasPump::outputCost()
{
  cout<<costPerGallon<<endl;
}

void GasPump::resetValues()
{
  gasAmount =0;
  amountCharged=0;
}
void GasPump::incrementValues()
{
  gasAmount += 10;
  amountCharged = gasAmount*costPerGallon;
}
void GasPump::displayCurrent()
{
  cout<<gasAmount<<" gallons Current charge: "<<amountCharged<<endl;
}
