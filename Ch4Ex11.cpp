/*You are a contestant on a game show and have won a shot at the grand prize.
Before you are three doors. $1,000,000 in cash has randomly been placed behind one door.
Behind the other two doors are the consolation prizes of dishwasher detergent.
The game show host asks you to select a door, and you randomly pick one.
However, before revealing the prize behind your door,
the game show host reveals one of the other doors that contains a consolation prize.
At this point, the game show host asks if you would like to stick with your original choice
or to switch to the remaining door.

Write a function to simulate the game show problem.
Your function should randomly select locations for the prizes,
select a door at random chosen by the contestant,
and then determine whether the contestant would win or lose by sticking with the original choice
or switching to the remaining door.
You may wish to create additional functions invoked by this function.

Next, modify your program so that it simulates playing 10,000 games.
Count the number of times the contestant wins when switching versus staying.
If you are the contestant, what choice should you make to optimize your chances of winning the cash,
or does it not matter? */


#include <iostream>
#include <cstdlib>

using namespace std;

void generateDoor(int& grandPrizeLoc);
void pickDoor(int& userChoice);
void gameChoice(int userChoice, int grandPrizeLoc, int &winByKeeping, int &winBySwitching);
void outputResult(int userChoice, int grandPrizeLoc, int winByKeeping, int winBySwitching);

int main(int argc, char **argv)
{
  int grandPrizeLoc, userChoice, winBySwitching, winByKeeping;

//run the game show 10000 times
  for(int i= 0; i<10000; ++i)
  {
    generateDoor(grandPrizeLoc);
    pickDoor(userChoice);
    gameChoice(userChoice, grandPrizeLoc, winByKeeping, winBySwitching);
  }

  outputResult(userChoice, grandPrizeLoc, winByKeeping, winBySwitching);

  return 0;
}

//randomly generate an int 0-2 to make the "grand prize door"
void generateDoor(int& grandPrizeLoc)
{
  grandPrizeLoc = rand()%3;
}

//randomly generate an int 0-2 to decide which door the user will pick
void pickDoor(int& userChoice)
{
  userChoice = rand()%3;
}

//if the grand prize door and the user choice is the same the user will win by keeping their choice
//else they would win by switching
void gameChoice(int userChoice, int grandPrizeLoc, int& winByKeeping, int& winBySwitching)
{
  if(userChoice == grandPrizeLoc)
    winByKeeping++;
  else
    winBySwitching++;
}

//output the number of times the user would win by keeping the door or switching
void outputResult(int userChoice, int grandPrizeLoc, int winByKeeping, int winBySwitching)
{
  cout<<"If the user keeps the original door they will win "<< winByKeeping <<" times."<<endl;
  cout<<"If the user switches doors they will win "<< winBySwitching << " times."<<endl;
}
