#include<iostream>
using namespace std;

void calculatePayableAmount(string day, int purchaseAmount);

main()
{
string day;  
cout<<"Enter the day of purchase: ";
cin>>day;
int purchaseAmount;
cout<<"Enter the total purchase amount: $";
cin>>purchaseAmount;
calculatePayableAmount(day, purchaseAmount);
}

void calculatePayableAmount(string day, int purchaseAmount)
{
if (day == "Sunday")
{
int discount = purchaseAmount * 0.1;
int remainingAmount = purchaseAmount - discount;
	cout<< "Payable Amount: " << "$" << remainingAmount;
}
else
	cout<< "Payable Amount: " << "$" << purchaseAmount;
}
