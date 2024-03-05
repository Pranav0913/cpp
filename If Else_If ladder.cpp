//IF_ELSE IF LADDER
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number  a ";
	cin>>a;
	if(a<0 || a>100)
	{
		cout<"Wrong no.";
	}
	else if (a>=40 && a<50)
	{
		cout<<"fail";
	}
	
		else if (a>=50 && a<60)
	{
		cout<<"D Grade";
	}
	
		else if (a>=60 && a<70)
	{
		cout<<"C Grade";
	}
	
		else if (a>=70 && a<80)
	{
		cout<<"B Grade";
	}
	
		else if (a>=80 && a<90)
	{
		cout<<"A Grade";
	}
	return 0;
}
	
