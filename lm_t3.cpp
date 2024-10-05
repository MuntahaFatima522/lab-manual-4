#include<iostream>
using namespace std;

void howManyStickers(int length);

main()
{
	int length;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>length;
	howManyStickers(length);
}


void howManyStickers(int length)
{
	int stickers,area;
	area=length*length;
	stickers=area*6;
	cout<<"Number of stickers neede: "<<stickers;
}
	