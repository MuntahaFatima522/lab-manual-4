#include<iostream>
using namespace std;

void CalculatePayableAmount(string day,int purchase);

main()
{
	string day;
	int purchase;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>purchase;
	CalculatePayableAmount(day,purchase);
}


void CalculatePayableAmount(string day,int purchase)
{
	int discount,PayableAmount;
	if(day=="sunday")
	{
		discount=0.1*purchase;
		PayableAmount=purchase-discount;
		cout<<"Payable Amount: $"<<PayableAmount;
	}
	if(day!="sunday")
	{
		PayableAmount=purchase;
		cout<<"Payable Amount: $"<<PayableAmount;
	}
}