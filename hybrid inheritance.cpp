#include<iostream>
using namespace std;
class a
	{
		public:
			int r,t;
			void get()
			{
				cout<<"enter the value of r and t"<<endl;
				cin>>r>>t;
			}
	};
class b:public a
		{
			public:
				float pie;
				void get()
				{
					cout<<"enter the value of pie"<<endl;
					cin>>pie;
				}
		};
class c:public a
{
	public:
		void add()
		{
			cout<<"addition is="<<r+t<<endl;
		}
};
class d:public b
{
	public:
		void area()
		{
			cout<<"area of circle ="<<pie*r*r<<endl;
		}
};

int main()
{
	c c1;
	c1.get();
	c1.add();
    d d1;
    d1.get();
    d1.area();
    return 0;
}
    
