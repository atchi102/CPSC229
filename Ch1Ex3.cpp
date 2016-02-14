/*Workers at a particular company have won a 7.6% pay increase retroactive for six months.
Write a program that takes an employee’s previous annual salary as input
and outputs the amount of retroactive pay due the employee, the new annual salary, and the new monthly salary.
Use a variable declaration with the modifier const to express the pay increase. */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  const double PAY_INCREASE = .076;
  double originalAnnualSal = 0;
  double originalMonthlySal = 0;
  double monthlyRetroactivePay = 0;
  double newAnnualSal = 0;
  double newMonthlySal = 0;

  cout << "Input origianl annual salary: " << endl;
  cin >> originalAnnualSal;
  originalMonthlySal = originalAnnualSal/12;
  monthlyRetroactivePay = (originalMonthlySal*PAY_INCREASE);
  newMonthlySal = originalMonthlySal + monthlyRetroactivePay;
  newAnnualSal = newMonthlySal*12;

  cout << "Retroactive pay due from last 6 months: "<< (monthlyRetroactivePay*6) << endl;
  cout << "New annual salary: "<< newAnnualSal << endl;
  cout << "New monthly salary: "<< newMonthlySal << endl;

  return 0;
}
