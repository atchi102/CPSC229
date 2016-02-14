#include <iostream>

using namespace std;

#include "countertype.h"

//initialize count to 0 if no constructor value given
CounterType::CounterType()
{
  count = 0;
}

//alternative constructor
CounterType::CounterType(int g_count)
{
  count = g_count;
}

//accessor for count
int CounterType::getCount()
{
  return count;
}

//mutator for count
void CounterType::setCount(int s_count)
{
  if(s_count>=0)
    count = s_count;
}

//increase count by 1
void CounterType::increaseCount()
{
  count++;
}

//if it will not make count negative decrease it by 1
void CounterType::decreaseCount()
{
  if(count!=0)
    count--;
}

//print count to screen
void CounterType::printCount()
{
  cout << count << endl;
}
