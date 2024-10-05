#include<iostream>
using namespace std;

void Fuel(float distance);

main()
{
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	Fuel(distance);
}


void Fuel(float distance)
{
	float fuel;
	fuel=distance*10;
	if(fuel<100)
	{
		cout<<"Fuel needed: 100";
	}
	if(fuel>=100)
	{
		cout<<"Fuel needed: "<<fuel;
	}
}