// 21 April 2022

/* 14. Write a function using variables as arguments to
swap the values of a pair of integers usingcall by
value, call by address and call by reference. */

#include<iostream>
using namespace std;

void callByValue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void callByAddress(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void callByReferece(int &X, int &Y){
    int t = X;
    X = Y;
    Y = t;
}

int main(){
    
    int a,b;
    cout<<"Enter Values of a and b"<<endl;
    cin>>a>>b;
    cout<<endl;

    cout<<"Before Call by Value Swap"<<" a="<<a<<" b="<<b<<endl;
    callByValue(a,b);
    cout<<"After Call by Value Swap"<<"  a="<<a<<" b="<<b<<endl<<endl;

    cout<<"Before Call by Address Swap"<<" a="<<a<<" b="<<b<<endl;
    callByAddress(&a,&b);
    cout<<"After Call by Address Swap"<<"  a="<<a<<" b="<<b<<endl<<endl;

    cout<<"Before Call by Reference Swap"<<" a="<<a<<" b="<<b<<endl;
    callByReferece(a,b);
    cout<<"After Call by Reference Swap"<<"  a="<<a<<" b="<<b<<endl<<endl;

    return 0;
}