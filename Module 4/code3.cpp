/*
Date: 23/05/22
Module 4, Program 3
*/


#include  <bits/stdc++.h>
#include <string>
using namespace std;

class book{
private:
	string bname;
	string aname;
	int qty;
	float rate;
	float total_price;
	
public:
	void getData(){
	cout<<"Enter Book name: ";
	getline(std::cin,bname);
	cout<<"Enter Author name: ";
	getline(std::cin,aname);
	cout<<"Enter Qty: ";
	cin>>qty;
	cout<<"Enter Rate: ";
	cin>>rate;
	cout<<"Book has been added..!!"<<endl<<endl;
	}
	
	void dispData(){
	cout<<"Book Name 	 : "<<bname<<endl;
	cout<<"Author Name 	 : "<<aname<<endl;
	cout<<"Available Qty 	 : "<<qty<<endl;
	cout<<"Rate 		 : "<<rate<<" Rs"<<endl;
	cout<<"Total Price	 : "<<total_price<<" Rs"<<endl;
	}
	
	void calcTotalPrice(){
		total_price = rate * qty;
	}
};

int main(){
	
	class book b1;
	b1.getData();
	b1.calcTotalPrice();
	b1.dispData();
	
	return 0;
}
