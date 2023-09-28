#include<iostream>
using namespace std;
 
void add(int num1, int num2);
void multiply(int num1, int num2);
void division(int num1, int num2);
void subtract(int num1, int num2);

main()
{ 
int num1, num2;
char op;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
if (op == '+')
{
	add(num1, num2);
}
if (op == '*')
{
	multiply(num1, num2);
}
if (op == '/')
{
	division(num1, num2);
}
if (op == '-')
{
	subtract(num1, num2);
}
}
void add(int num1, int num2)
{
cout<<"Addition: "<< num1+num2;
}

void multiply(int num1, int num2)
{
cout<<"Multiplication: "<< num1*num2;
}

void division(int num1, int num2)
{
cout<<"Division: "<< num1/num2;
}

void subtract(int num1, int num2)
{
cout<< "Subtraction: "<< num1-num2;
}