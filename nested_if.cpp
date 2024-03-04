//NESTED_IF statement
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value of a";
	cin>>a;
	if(a<15)	
	{
		if(a<10)
		{
		cout<<"A is between 0 to 10";
	}
	else
	{
		cout<<"A is between 10 to 15";
    }
}
	 else
	{
		if(a<10)
		{
			cout<<"A is between 0 to 10";
		}
		else
		{
			cout<<"A is greater than 10";
			}	
	}
	
	return 0;
}
