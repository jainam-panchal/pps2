/*
Date: 23/05/22
Module 4, Program 4
*/
 
#include <iostream>
using namespace std;

class time{

private:
	int h,m,s,t,backup;

public:
	void getData(){
		cout<<"Enter Seconds: ";
		cin>>t;
		backup = t;
	}
	
	void setData(int tt){
		t = tt;
		backup = tt;
	}
	
	void convData(){
		h = t/3600;
		t = t%3600;
		m = t/60;
		t = t%60;
		s = t;
	}
	
	void dispData(){
		cout<<endl<<backup<<" Seconds --> "<<h<<" Hours, "<<m<<" Minutes, "<<s<<" Seconds."<<endl<<endl;
	}
	
};


int main(){
	
	time t1,t2;
	t1.setData(10000);
	t2.getData();
	t1.convData();
	t2.convData();
	t1.dispData();
	t2.dispData();
	
	return 0;
}
