#include<iostream>
using namespace std;

void inchesToFeet(float value_inches);

main()
{
float value_inches;
cout<<"Enter the measurement in inches: ";
cin>> value_inches;
inchesToFeet(value_inches);
}

void inchesToFeet(float value_inches)
{
float value_feet;
value_feet =  value_inches/12;
cout<<"Equivalent in feet: " << value_feet;
}
