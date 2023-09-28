#include<iostream>
using namespace std;

void calculateFuel(float distance);

main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
calculateFuel(distance);
}

void calculateFuel(float distance)
{
float amountOFfuel;
amountOFfuel=10*distance;
cout<<"Fuel needed: "<<amountOFfuel;
}

