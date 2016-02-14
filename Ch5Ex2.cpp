/*Write a function called deleteRepeats
that has a partially filled array of characters as a formal parameter
and that deletes all repeated letters from the array.
Since a partially filled array requires two arguments,
the function will actually have two formal parameters:
an array parameter and a formal parameter of type int that gives the number of array positions used.
When a letter is deleted, the remaining letters are moved forward to fill in the gap.
This will create empty positions at the end of the array so that less of the array is used.
Since the formal parameter is a partially filled array,
a second formal parameter of type int will tell how many array positions are filled.
This second formal parameter will be a call-by-reference parameter and will be changed
to show how much of the array is used after the repeated letters are deleted.

For example, consider the following code:
   char a[10];
   a[0] = 'a';
   a[1] = 'b';
   a[2] = 'a';
   a[3] = 'c';
   int size = 4;
   deleteRepeats(a, size);
After this code is executed,
the value of a[0] is 'a', the value of a[1] is 'b', the value of a[2] is 'c',
and the value of size is 3.
(The value of a[3] is no longer of any concern,
since the partially filled array no longer uses this indexed variable.)
You may assume that the partially filled array contains only lowercase letters.
Embed your function in a suitable test program. */


#include <iostream>

using namespace std;

void deleteRepeats(char a[], int& size);
void lookforRepeats(char currentChar, int currentIndex, char a[], int& size);
void foundDuplicate(char a[], int indexOfRepeat, int size);
void printResults(char a[], int size);

int main(int argc, char **argv)
{
  char a[10];
  a[0] = 'a';
  a[1] = 'b';
  a[2] = 'a';
  a[3] = 'c';
  int size = 4;
  deleteRepeats(a, size);
  printResults(a, size);

  return 0;
}

//run through each value in the array and call lookforRepeats on each instance
void deleteRepeats(char a[], int& size)
{
  for(int i=0;i<size;++i)
  {
    lookforRepeats(a[i], i, a, size);
  }
}

//run through array following the current char
//if there is a repeat call foundDuplicate function for that index
//reduce size by one and continue to look
void lookforRepeats(char currentChar, int currentIndex, char a[], int& size)
{
  for(int j = currentIndex+1; j<size; ++j)
  {
    if(a[j] == currentChar){
      foundDuplicate(a,j,size);
      size--;
    }
  }
}

//delete and reorder array according to the current size of array
void foundDuplicate(char a[], int indexOfRepeat, int size)
{
  for(int z = indexOfRepeat; z<(size-1); ++z)
  {
    a[z]=a[z+1];
  }
}

//after program has run show the new array
void printResults(char a[], int size)
{
  cout<<"New array: "<<endl;
  for(int b =0; b<size; ++b)
  {
    cout<<"a["<<b<<"]: "<<a[b]<<endl;
  }
}
