/*
Date: 23/05/22
Module 4, Program 2
*/

#include<bits/stdc++.h>
using namespace std;

class data{
private:
	char code[10];
	float cost;
	int qty;
	float total_price;
		
public:
    
    data(){
        strcpy(code,"");
        cost = 0.0;
        qty = 0;
        total_price = 0;
    }
    
    ~data(){
        cout << "Obj Destroyed..\n";
    }
    
	void getData(){
		cout<<"Enter Product Code: ";
		cin>>code;
		cout<<"Enter Cost: ";
		cin>>cost;
		cout<<"Enter Quantity: ";
		cin>>qty;
		cout<<"Product has been Registerd..!!"<<endl<<endl;
	}
	
	void dispData(){
		cout<<"Product Code  : "<<code<<endl;
		cout<<"Cost          : "<<cost<<" Rs"<<endl;
		cout<<"Available Qty : "<<qty<<endl;
		cout<<"Total Price   : "<<total_price<<" Rs"<<endl<<endl; 	
	}
	
	void calcPrice(){
		total_price = cost * qty;
	}
	
};

int main(){
	
	data p1;
	p1.getData();
	p1.calcPrice();
	p1.dispData();
	
	
	cout << "\n\n";
	return 0;
}
