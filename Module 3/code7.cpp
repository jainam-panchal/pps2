/* 7. Write overloaded functions to convert ascii to int and ascii to
float.*/

#include <iostream>
using namespace std;

char conv(int x){
	return x;
}

int conv(char x){
	return x;
}

int main(){
	int choice;
	cout<<"1. ASCII to Integer\n2. Integer to ASCII\nChoose: ";
	cin>>choice;
	cout<<"\n";
	
	if(choice == 1){
		char a;
		cout<<"Input : ";
		cin>>a;
		cout<<"ASCII to Integer --> "<<conv(a);
	}
	else if(choice == 2){
		int c;
		cout<<"Input : ";
		cin>>c;
		cout<<"Integer to ASCII --> "<<conv(c);
	}
	else{
		cout<<"Invalid Input !";
	}
}
