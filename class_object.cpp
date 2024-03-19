//class and object
#include<iostream>
using namespace std;
class student
{
	public:
		int a,b;
		void input()
		{
			cout<<"Enter the values of a & b";
			cin>>a>>b;
		}
		void mul()
		{
			cout<<"Multiplication is"<<a*b;
		}
	
};
int main()
{
student s1;
s1.input();
s1.mul();
return 0;
}
