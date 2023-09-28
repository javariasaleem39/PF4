#include<iostream>
using namespace std;

void calculatePayableAmount(string day, int purchaseAmount);

main()
{
string day;
int purchaseAmount;
while(true)
{
cout<< "Enter the day of purchase: ";
cin>>day;
cout<< "Enter the total purchase amount: $";
cin>>purchaseAmount;
calculatePayableAmount(day, purchaseAmount);
cout<<endl<<endl;
}
}

void calculatePayableAmount(string day, int purchaseAmount)
{
int remaining_amount=purchaseAmount-(purchaseAmount*0.05);
int remainingAmount=purchaseAmount- (purchaseAmount*0.1);
if (day == "Sunday")
{
	cout<< "Payable Amount: "<<"$" << remainingAmount;
}
else
	cout<< "Payable Amount: "<<"$" << remaining_amount;
}