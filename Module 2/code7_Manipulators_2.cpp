// 22-4
// Example of setw

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int total = 100;
	int maths,pps,st;
	char name[20];
	char rn[20];
	cout<<"Enter Name of Student: ";
	cin>>name;
	cout<<"Enter Roll Num of Student: ";
	cin>>rn;
	cout<<endl;
	cout<<"Enter marks of Maths,PPS,ST in order: "<<endl;
	cin>>maths>>pps>>st;
	cout<<endl;
	
	//basic details
	cout<<setw(-15)<<"Name    "; cout<<setw(30)<<name<<endl;
	cout<<setw(-15)<<"Roll Num"<<setw(30)<<rn<<endl<<endl;
	
	//subject marks
	cout<<setw(-15)<<"Subject"<<setw(15)<<"Scored"<<setw(15)<<"Total"<<endl;
	cout<<setw(-15)<<"Maths"<<setw(15)<<maths<<setw(15)<<total<<endl;
	cout<<setw(-15)<<"PPS  "<<setw(15)<<pps<<setw(15)<<total<<endl;
	cout<<setw(-15)<<"ST   "<<setw(15)<<st<<setw(15)<<total<<endl;
	
	//perfomance
	int total1 = maths+pps+st;
	float perc = (total1 * 100) / 300.0;
	cout<<setw(-15)<<"Total"<<setw(15)<<total1<<setw(15)<<300<<endl<<endl;
	cout<<setw(-15)<<"Percentage "<<setw(15)<<perc<<"%"<<endl;
	
	return 0;
}
