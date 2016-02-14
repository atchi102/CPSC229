/*Define a class for a type called CounterType.
An object of this type is used to count things, so it records a count that is a nonnegative whole number.
Include a mutator function that sets the counter to a count given as an argument.
Include member functions to increase the count by one and to decrease the count by one.
Be sure that no member function allows the value of the counter to become negative.
Also, include a member function that returns the current count value and one that outputs the count.
Embed your class definition in a test program.

CounterType();
CounterType(int g_count);
int getCount();
void setCount(int s_count);
void increaseCount();
void decreaseCount();
void printCount();*/


#include <iostream>
#include "countertype.h"

using namespace std;


int main(int argc, char **argv)
{
  CounterType ct1, ct2(4);

  ct1.increaseCount();
  ct1.printCount(); //print 1
  ct1.setCount(ct2.getCount());
  ct2.decreaseCount();
  ct1.printCount(); //print 4
  ct2.printCount(); //print 3

  return 0;
}
