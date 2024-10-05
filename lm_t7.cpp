#include<iostream>
using namespace std;

void EvenOrOdd(int number);

main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	EvenOrOdd(number);
}


void EvenOrOdd(int number)
{
	if(number%2==0)
	{
		cout<<"Number "<<number <<" is even";
	}
	if(number%2!=0)
	{
		cout<<"Number "<<number <<" is odd";
	}
}
	
