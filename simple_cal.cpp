#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"this is the simple calculator that will help you with different arithmetic operation";
	int choice;
	cout<<"1.addition(+):"<<endl;
	cout<<"2.substraction(-):"<<endl;
	cout<<"3.multiplication(*):"<<endl;
	cout<<"4.division(/):"<<endl;
	double number1;
	double number2;
	cout<<"enter the first number:";
	cin>>number1;
	cout<<"enter the second number:";
	cin>>number2;
	cout<<"enter the operation you want to perform:";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"result:"<<number1+number2;break;
		case 2:cout<<"result:"<<number1-number2;break;
		case 3:cout<<"result:"<<number1*number2;break;
		case 4:cout<<"result:"<<number1/number2;break;
		
	}
}
