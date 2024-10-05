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
	cout<<"Fuel needed: "<<fuel;
}
	