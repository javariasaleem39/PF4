#include<iostream>
using namespace std;

void calculateFuel(float distance);

main()
{
float distance;
cout<<"Enter the distance: ";
cin>> distance;
calculateFuel(distance);
}

void calculateFuel(float distance)
{
float totalFuel;
totalFuel = 10 * distance;
if (totalFuel>100)
{
	cout << "Fuel needed: "<< totalFuel;
}
else
	cout << "Fuel needed: 100";
}
	
