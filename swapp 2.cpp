#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	swap(a,b);
	return 0;
}
void swap (int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"after swapping a="<<a<<b<<endl;
}
