// 5. WAP that prints a character on screen using function overloading
// 19-04-22

#include <iostream>
using namespace std;

void repeat(char temp,int limit = 1){
	cout<<"Printing Char '"<<temp<<"' For "<<limit<<" Times"<<endl<<endl;
	for(int i=0 ; i<limit ; ++i){
		cout<<temp<<endl;
	}
}

void repeat(int temp,int limit = 1){
	cout<<"Printing  Int '"<<temp<<"' For "<<limit<<" Times"<<endl<<endl;
	for(int i=0 ; i<limit ; ++i){
		cout<<temp<<endl;
	}
}

void repeat(float temp,int limit = 1){
	cout<<"Printing  Float '"<<temp<<"' For "<<limit<<" Times"<<endl<<endl;
	for(int i=0 ; i<limit ; ++i){
		cout<<temp<<endl;
	}
}

int main(){
	
	// declaring variables
	int a,ans,n;
	float b;
	char c;
	
	cout<<"Program to Print Character for n times..."<<endl<<endl;
	cout<<"Enter 1 for Integer\nEnter 2 for Float\nEnter 3 for Character\nChoose: ";
	cin>>ans;
	cout<<endl;
	
	//conditions
	if(ans == 1){
		cout<<"Enter Integer Value: ";
		cin>>a;
		cout<<"Enter How many times to repeat: ";
		cin>>n;
		repeat(a,n);		
	}	
	else if(ans == 2){
		cout<<"Enter Float Value: ";
		cin>>b;
		cout<<"Enter How many times to repeat: ";
		cin>>n;
		repeat(b,n);
	}
	else if(ans == 3){
		cout<<"Enter a Character: ";
		cin>>c;
		cout<<"Enter How many times to repeat: ";
		cin>>n;
		repeat(c,n);
	}
	else{
		cout<<"Invalid Input !";
	}
	
	return 0;
}
