/*Buoyancy is the ability of an object to float.
Archimedes’ Principle states that the buoyant force is equal to the weight of the
fluid that is displaced by the submerged object.
The buoyant force can be computed by Fb = V * g
where Fb is the buoyant force, V is the volume of the submerged object,
and g is the specific weight of the fluid.
If Fb is greater than or equal to the weight of the object, then it will float, otherwise it will sink.
Write a program that inputs the weight (in pounds) and radius (in feet) of a sphere
and outputs whether the sphere will sink or float in water.
Use g = 62.4 lb/ft3 as the specific weight of water.
The volume of a sphere is computed by (4/3)pir^3. */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
  const double WATER_WEIGHT = 62.4;
  const double PI = 3.1415;
  double sphereWeight = 0;
  double sphereRadius = 0;
  double bouyantForce = 0;
  double sphereVolume = 0;
  cout<<"Input sphere weight "<< endl;
  cin >> sphereWeight;
  cout<<"Input sphere radius "<< endl;
  cin >> sphereRadius;
  sphereVolume = (4/3)*PI*pow(sphereRadius,3);
  bouyantForce = WATER_WEIGHT* sphereVolume;
  if(bouyantForce<sphereWeight)
    cout << "The sphere will sink"<<endl;
  else
    cout << "The sphere will float"<<endl;
  return 0;
}
