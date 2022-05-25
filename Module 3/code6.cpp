/* 6. WA function power() to raise a number m to power n. The
function takes a double value for m and int value for n, and
returns the value (results) correctly. Use default argument 2
for n and m to make a function to calculate squares when
argument is not passed. WAP for the same. */

#include <iostream>
#include <math.h>
using namespace std;

inline long double power(double m, int n=2){
	long double result = pow(m,n);
	return result;
}


int main(){
	double  x;
	int n;
	
	cout<<"Program to calculate Power, default power is set to 2"<<endl<<endl;
	cout<<"m^n"<<endl<<"Enter Value of m : ";
	cin>>x;
	
	cout<<"Enter Value of n : ";
	cin>>n;
	
	cout<<"Funciton called With Arguements..."<<endl;
	long double result1  = power(x,n);
	cout<<"Value = "<<result1<<endl<<endl;
	
	cout<<"Funciton called Without Arguements..."<<endl;
	double result2  = power(x);
	cout<<"Value = "<<result2;
	
	return 0;
}
