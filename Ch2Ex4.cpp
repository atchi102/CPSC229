/* Write a program that finds and prints all of the prime numbers between 3 and 100.
A prime number is a number that can only be divided by one and itself (i.e., 3, 5, 7, 11, 13, 17, ...).

One way to solve this problem is to use a doubly-nested loop. The outer loop can iterate from 3 to 100,
while the inner loop checks to see whether the counter value for the outer loop is prime.

One way to decide whether the number n is prime is to loop from 2 to n - 1;
if any of these numbers evenly divides n, then n cannot be prime.

If none of the values from 2 to n - 1 evenly divide n, then n must be prime.
(Note that there are several easy ways to make this algorithm more efficient.) */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  bool isPrime;

  for(int i = 3; i<=100; ++i)
  {
    isPrime = true;
    for(int j = 2; j<=(i-1); ++j)
    {
      if(i%j == 0){
        isPrime = false;
      }

      if(j==(i-1) && isPrime == true)
      {
        cout << i << " is prime" << endl;
      }
    }
  }

  return 0;

}
