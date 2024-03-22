//friend function
#include<iostream>
using namespace std;
class box
{
	private:
		int len;
	public:
		box()
		{
			len=100;	
		}
		friend int print(box);
};
int print (box b)
{
	b.len+=100;
	return b.len;
}
int main()
{
	box b2;
	cout<<print(b2);
	return 0;
}
