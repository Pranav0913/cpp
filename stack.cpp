#include<iostream>
#include<iomanip>
using namespace std;

class stack
{
	private:int array[10],top;
		int size,i;

	public:
		void elements()
		{	top=0;
			cout<<"Enter size of array";
			cin>>size;
			cout<<"Enter Elements in array"<<endl;
			for(i=0;i<size;i++)
			{
				cin>>array[i];
				
			}
		}
		void push()
		{
			int new_ele;
			cout<<"Enter the element you want to insert"<<endl;
			cin>>new_ele;
			if(top==10)
			{
				cout<<"stack overflow"<<endl;
			}
			else
			array[size]=new_ele;
			
		}
		void pop()
		{
                        if(top==-1)
                        {
                                cout<<"stack Underflow"<<endl;
                        }
                        else
                        array[top-1];
                        size=top-1;
                }
		void display()
		{
			int i;
			for(i=0;i<size+1;i++)
			{
				cout<<array[i]<<setw(10);
			}
		}
		void menu()
		{
			int opt;
			while(1)
			{
				cout<<"\n 1.Push\n2.Pop\n3.Display\nENTER OPTION";
				cin>>opt;
				if(opt<4)
			{
				switch(opt)
			{
				case 1: {push();break;}
				case 2: {pop();break;}
				case 3:{display();break;}
			}
			}
			}
		}

};
int main()
{
	stack a;
	a.elements();
	a.menu();
}
