#include<iostream>
using namespace std;
int calculation(int a,int b,char c)
{
	int re;
	switch(c)
	{
	case '*':
		re=a*b;
		break;
		case '/':
			re=a/b;
			break;
			case '+':
				re=a+b;
				break;
				case '-':
				re=a-b;
				break;
				case '%':
				re=a%b;
				break;
				default:
				cout<<"Invalid Operand";
			}
	return re;
}
int main()
{
	int results,num1,num2,times;
	char sign;
	string name;
	cout<<"ENTER YOUR NAME\n";
	cin>>name;
	cout<<"Welcome "<<name<<" to your calculator"<<endl;
	cout<<"Enter the number of times to run the calculator"<<endl;
	cin>>times;
	for(int i=0;i<times;i++)
	{
	cout<<"Enter the first number\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	cout<<"Enter your operation sign\n";
	cin>>sign;
	results=calculation(num1,num2,sign);
	cout<<"The result of your calculation is ="<<results<<endl;
}
	return 0;	
}