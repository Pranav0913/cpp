#include<iostream>
#include<iomanip>
using namespace std;
class date
{
	private:int day,month,year;
	char ch;
	
	public:int d, m, y;
	
	date()
	{
		cout<<"ENTER DATE"<<endl;
		cin>>day;
		cout<<"ENTER MONTH"<<endl;
		cin>>month;
		cout<<"ENTER YEAR"<<endl;
		cin>>year;
	}
	
	void display()
	{
		cout<<"dd-mm-yyyy format"<<endl<<day<<"-"<<month<<"-"<<year<<endl;
		cout<<"dd/mm/yyyy format"<<endl<<day<<"/"<<month<<"/"<<year<<endl;
	}
	date(int d,int m,int y)
	{
		cout<<"Enter DATE"<<endl;
		cin>>d;
		cout<<"Enter MONTH"<<endl;
		cin>>m;
		cout<<"Enter YEAR"<<endl;
		cin>>y;
		cout<<"dd-mm-yyyy format"<<endl<<d<<"-"<<m<<"-"<<y<<endl;
		cout<<"dd/mm/yyyy format"<<endl<<d<<"/"<<m<<"/"<<y<<endl;
	}
};
int main()
{
	date a;
	a.display();
	int d,m,y;
	date b(d,m,y);

}
	

