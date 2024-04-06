#include<iostream>
#include<iomanip>
using namespace std;
class person
{
	public:
		string name;
		string email_Id;
		string mobile_no;
	    void get();
		
	
};
class student:public person

{
	public:int Roll_no;
	public:
		void get()
		{
			cout<<"Enter the name of student:"<<endl;
			cin>>name;
			cout<<"Enter the email_Id of student:"<<endl;
			cin>>email_Id;
			cout<<"Enter the Roll_no of student:"<<endl;
			cin>>Roll_no;
			cout<<"Enter the mobile_no of student:"<<endl;
			cin>>mobile_no;
		}
		void disp()
		{
			    cout<<"            student data is          :"<<endl;
				cout<<name<<setw(30)<<Roll_no<<setw(10)<<mobile_no<<setw(10)<<email_Id<<setw(20);
				cout<<endl;
				
		  	
		}
};

class faculty:public student
{
	public: int faculty_Id;
	        int salary;
	        char subject;
	public:
		void get()
		{
			cout<<"Enter the faculty_Id:"<<endl;
			cin>>faculty_Id;
			cout<<"Enter the salary of faculty:"<<endl;
			cin>>salary;
			cout<<"Enter the subject of faculty:"<<endl;
			cin>>subject;		
		}
		void disp()
		{
			cout<<"            faculty data is            "<<endl;
			cout<<name<<setw(30)<<mobile_no<<setw(10)<<salary<<setw(10)
			<<subject<<setw(10)<<email_Id<<setw(20);
		}
	
};
int main()
{
	student s1;
	s1.get();
	s1.disp();
	faculty f1;
	f1.get();
	f1.disp();
	return 0;
}
