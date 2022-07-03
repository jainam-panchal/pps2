#include <bits/stdc++.h>
using namespace std;

class student{
private:
	string name;
	int marks[6];
	float per;
	char cls[40];

public:
    
    student(){
        name = "";
        for(int i=0;i<6;++i){
            marks[i] = 0;
        }
        per = 0.0;
        strcpy(cls,"");
    }
    
    ~student(){
        cout << "Object Destroyed..\n";
    }
    
	void getData(){
		cout<<"Enter Student Name: ";
		cin>>name;
		for(int i=0;i<6;++i){
			cout<<"Enter Marks for Subject "<<i+1<<" : ";
			cin>>marks[i];
			if(marks[i]>100){
				marks[i] = 0;
			}
		}
		cout<<endl;
	}
	
	void dispData(){
		cout<<"Student Name: "<<name<<endl;
		for(int i=0;i<6;++i){
			cout<<"Scored "<<marks[i]<<" Out of 100 in Subject "<<i+1<<endl;
		}
		cout<<endl<<"Percentage : "<<per<<endl;
		cout<<"Class	: "<<cls<<endl<<endl;	
	}
	
	void calc(){
		int total=0;
		for(int i=0 ; i<6 ; ++i){
			total += marks[i];
		}
		per = (total * 100) / 600;
		if(per>=70){
			strcpy(cls,"First Class with Distinction");
		}
		else if(per>=60 && per<70){
			strcpy(cls,"First Class");
		}
		else if(per>=50 && per<60){
			strcpy(cls,"Second Class");
		}
		else{
			strcpy(cls,"Failed");
		}
	}
	
};

int main(){
	student s[2];
	
	int i;
	for(i=0; i<2; ++i){
		s[i].getData();
		s[i].calc();
	}
	cout<<"Data has been registered..!"<<endl<<endl;
	
	cout<<"How many user's data you want to print? "<<"0-"<<i<<endl;
	int n;
	cin>>n;
	
	for(int j=0;j<n;j++){
		s[j].dispData();
	}
	
	cout << "\n";
	return 0;
}
