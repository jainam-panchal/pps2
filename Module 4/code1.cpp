/*
Date: 23/05/22
Module 4, Program 1
*/


#include <iostream>
using namespace std;

class player{
private:
	char name[10];
	int age,runs,hi,lo,tests,avg;

public:
	void getData(){
		cout<<"Enter Player Name: ";
		cin>>name;
		cout<<"Enter Player Age: ";
		cin>>age;
		cout<<"Enter Run: ";
		cin>>runs;
		cout<<"Enter Highest Score: ";
		cin>>hi;
		cout<<"Enter Lowest Score: ";
		cin>>lo;
		cout<<"Enter Total Test Matches: ";
		cin>>tests;
	}
	
	void dispData(){
		cout<<endl<<endl;
		cout<<"Player Name	: "<<name<<endl;
		cout<<"Age			: "<<age<<endl<<endl;
		cout<<" ----Analytics---- "<<endl;
		cout<<"Runs       	: "<<runs<<endl;
		cout<<"Highest Score   : "<<hi<<endl;
		cout<<"Lowest Score    : "<<lo<<endl;
		cout<<"Total Tests	: "<<tests<<endl;
		cout<<"Average		: "<<avg<<endl;
	}
	
	void calcAvg(){
		avg = runs / float(tests);
	}
};


int main(){
	player p1;
	p1.getData();
	p1.calcAvg();
	p1.dispData();
	
	return 0;
}
