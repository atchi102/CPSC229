/*Write a program that determines whether a meeting room is in violation of fire law regulations
regarding the maximum room capacity.
The program will read in the maximum room capacity and the number of people to attend the meeting.
If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting
and tells how many additional people may legally attend.
If the number of people exceeds the maximum room capacity,
the program announces that the meeting cannot be held as planned due to fire
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int maxRoomCap = 0;
  int numPeople = 0;
  cout <<"What is the maximum room capacity for this room?"<<endl;
  cin >> maxRoomCap;
  cout <<"How many people will attend this meeting?"<<endl;
  cin >> numPeople;

  if(numPeople>maxRoomCap)
  {
    cout<<"The meeting cannot be held as planned due to fire hazard."<<endl;
  }
  else
  {
    cout<<"The meeting is legal to hold. "<<(maxRoomCap - numPeople)<<" additional people may attend."<<endl;
  }

  return 0;
}
