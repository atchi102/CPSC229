/*Write a program that reads in an array of type int.
You may assume that there are fewer than 50 entries in the array.
Your program determines how many entries are used. The output is to be a two-column list.
The first column is a list of the distinct array elements;
the second column is the count of the number of occurrences of each element.
The list should be sorted on entries in the first column, largest to smallest.

For the array values
   –12 3 –12 4 1 1 –12 1 –1 1 2 3 4 2 3 –12

the output should be
N Count
4  2
3  3
2  2
1  4
10 1
12 4 */


#include <iostream>

using namespace std;

void countRepeats(int a[], int& size);
void lookforRepeats(int currentint, int currentIndex, int a[], int& size);
void foundDuplicate(int a[], int indexOfRepeat, int size);


int main(int argc, char **argv)
{

  int a[]={12,3,12, 4, 1, 1, 12, 1, 10, 1, 2, 3, 4, 2, 3, 12};
  int size = 16;
  cout<<"N    "<<"Count"<<endl;
  countRepeats(a, size);

}

//run through each value in the array and call lookforRepeats on each instance
void countRepeats(int a[], int& size)
{
  for(int i=0;i<size;++i)
  {
    lookforRepeats(a[i], i, a, size);
  }
}

//run through array following the current int
//if there is a repeat call foundDuplicate function for that index
//reduce size by one and continue to look
void lookforRepeats(int currentint, int currentIndex, int a[], int& size)
{
  int duplicates = 1;
  for(int j = currentIndex+1; j<size; ++j)
  {
    if(a[j] == currentint){
      duplicates++;
      foundDuplicate(a,j,size);
      size--;
    }
  }
  cout<<currentint<<"    "<<duplicates<<endl;
}

//delete and reorder array according to the current size of array
void foundDuplicate(int a[], int indexOfRepeat, int size)
{
  for(int z = indexOfRepeat; z<(size-1); ++z)
  {
    a[z]=a[z+1];
  }
}
