/*A metric ton is 35,273.92 ounces.
Write a program that will read the weight of a package of breakfast cereal in ounces
and output the weight in metric tons
as well as the number of boxes needed to yield one metric ton of cereal.*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  double cerealOunces = 0;
  double cerealMetricTons = 0;
  double numCerealBoxes = 0;
  const double OUNCES_TO_METRIC_TONS = 0.0000283495;

//read in the weight of cereal in ounces
  cout <<"Enter the weight of the breakfast cereal in ounces:"<<endl;
  cin >> cerealOunces;

//convert ounce measurement to metric tons
  cerealMetricTons = cerealOunces*OUNCES_TO_METRIC_TONS;
//divide 1 by this number to determine the number of boxes needed to equal one metric ton
  numCerealBoxes = 1/cerealMetricTons;

//output results
  cout <<"Weight of package in metric tons: " << cerealMetricTons << endl;
  cout <<"Number of boxes to equal one metric ton: " << numCerealBoxes << endl;


  return 0;
}
