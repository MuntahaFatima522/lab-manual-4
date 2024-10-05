#include<iostream>
using namespace std;

void addition(float num1,float num2);
void subtraction(float num1,float num2);
void multiplication(float num1,float num2);
void division(float num1,float num2);

main()
{
	float num1,num2;
	char op;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	cout<<"Enter an operator(+,-,*,/): ";
	cin>>op;
	if(op=='+')
	{
		addition(num1,num2);
	}
	if(op=='-')
	{
		subtraction(num1,num2);
	}
	if(op=='*')
	{
		multiplication(num1,num2);
	}
	if(op=='/')
	{
		division(num1,num2);
	}
}


void addition(float num1,float num2)
{
	float sum;
	sum=num1+num2;
	cout<<"Additon: "<<sum<<endl;
}



void subtraction(float num1,float num2)
{
	float difference;
	difference=num1-num2;
	cout<<"Subtracton: "<<difference<<endl;
}



void multiplication(float num1,float num2)
{
	float product ;
	product=num1*num2;
	cout<<"Multiplicaton: "<<product<<endl;
}



void division(float num1,float num2)
{
	float quotient;
	quotient=num1/num2;
	cout<<"Division: "<<quotient<<endl;
}




