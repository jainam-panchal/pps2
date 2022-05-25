#include <iostream>
using namespace std;

int add(int &a , int &b){
	int temp;
	temp = a + b;
	return temp;
}

float add(float &a, float &b){
	float temp;
	temp = a + b;
	return temp;
}

int main(){
	
	int A,B;
	float C,D;
	int ans;
		
	cout<<"Program To Add Two Integers or Float "<<endl<<endl;
	
	//options
	cout<<"Choose 1 for Int and Choose 2 for Float: ";
	cin>>ans;
	
	//conditions
	if(ans == 1){
		cout<<"Enter Two Integer Values: ";
		cin>>A>>B;
		int total = A + B;
		cout<<"Total = "<<total;		
	}
	else if(ans == 2){
		cout<<"Enter Two Float Values: ";
		cin>>C>>D;
		float total1 = C + D;
		cout<<"Total = "<<total1 ;
	}
	else {
	    cout<<"Invalid Input..!!";
	}
	
	return 0;
}
