#include<iostream>
using namespace std;

void printname(string name);

main()
{
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	printname(name);
}


void printname(string name)
{
	while(true)
	{
		cout<<"Your name is "<<name <<endl;
	}
}