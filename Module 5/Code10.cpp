#include <bits/stdc++.h>
using namespace std;

class strclass{
private:
    char str[20];

public:
    void getData(){
        cin >> str;
        cout << "Input Saved..!\n";
    }
    
    void putData(){
        cout << "String = "<<str<<endl;
    }
    
    void operator +(strclass &obj){
        strcat(str, obj.str);
    }
};

int main(){

	strclass s1,s2;
	cout << "Enter First String     : ";
	s1.getData();
	cout <<  "Enter Second String   : ";
	s2.getData();

	cout << "\n";
	s1+s2;
	cout << "After Concatenation....\n";
	s1.putData();

	return 0;
}