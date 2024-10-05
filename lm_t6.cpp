#include<iostream>
using namespace std;

void Result(int score);

main()
{
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	Result(score);
}


void Result(int score)
{
	if(score>50)
	{
		cout<<"Pass";
	}
	if(score<=50)
	{
		cout<<"Fail";
	}
}