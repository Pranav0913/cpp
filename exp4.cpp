#include<iostream>
using namespace std;

struct product
{
	int product_id;
	char product_name[10];
	int product_price;
	int GST;
	float CGST;
	float SGST;
	float Actual_Price;
};

void addproduct()
{
	product p1;
	cout<<"Add product id"<<endl;
	cin>>p1.product_id;
	cout<<"Add product name"<<endl;
	cin>>p1.product_name;
	cout<<"Add product price"<<endl;
	cin>>p1.product_price;
	cout<<"Enter GST : "<<endl;
	cin>>p1.GST;
	p1.CGST=p1.SGST=p1.GST/2;
	cout<<"CGST :"<<p1.CGST<<endl;
	cout<<"SGST :"<<p1.SGST<<endl;
	p1.Actual_Price = p1.product_price +p1.product_price*p1.GST/100;
}

void display()
{
	product p1;
	cout<<"ID: ";
	cout<<p1.product_id<<endl;
	cout<<"NAME: ";
	cout<<p1.product_name<<endl;
	cout<<"PRICE: ";
	cout<<p1.product_price<<endl;
	cout<<"Actual price with GST :"<<p1.Actual_Price<<endl;
}

int main(){
	addproduct();
	display();
}


