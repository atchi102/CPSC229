#include "counter.h"
#include <iostream>

using namespace std;


Counter::Counter(int g_highestCount)
{
  count = 0;
  highestCount = g_highestCount;
  overflowReached = false;
}

void Counter::reset()
{
  count = 0;
  overflowReached = false;
}

void Counter::incr1(int times)
{
  count +=1*times;
  if(count>highestCount){
    count = highestCount;
    overflowReached = true;
  }
}

void Counter::incr10(int times)
{
  count += 10*times;
  if(count>highestCount){
    count = highestCount;
    overflowReached = true;
  }
}

void Counter::incr100(int times)
{
  count += 100*times;
  if(count>highestCount){
    count = highestCount;
    overflowReached = true;
  }
}

void Counter::incr1000(int times)
{
  count += 1000*times;
  if(count>highestCount){
    count = highestCount;
    overflowReached = true;
  }
}

bool Counter::overflow()
{
  if(overflowReached){
    cout<<"Overflow reached"<<endl;
    return true;
  }
  else{
    cout<<"Overflow not reached"<<endl;
    return false;
  }

}
