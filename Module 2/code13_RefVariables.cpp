// 21 April 2022
// 13. W.A.P. that will show the effect of reference variable.

#include<iostream>
using namespace std;
int main(){
    
    // normal variables
    int a,b;
    cout<<"Enter Values of a and b: ";
    cin>>a>>b;
    cout<<"a = "<<a<<"  b = "<<b<<endl;

    // reference variables
    int &x = a;
    int &y = b;

    cout<<endl<<"x and y will be reference variables of a and b"<<endl;
    cout<<"Enter Values of x and y: ";
    cin>>x>>y;

    // results
    cout<<endl<<"Now"<<endl;
    cout<<"a = "<<a<<"  b = "<<b<<endl;

    return 0;
}