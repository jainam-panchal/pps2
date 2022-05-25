#include <iostream>

void repchar(char c = '*', int i = 45){
	for(int j=0;j <= i; ++j){
		std::cout<<c;
	}
	std::cout<<"\n";
}

int main(){
	
	repchar();
	repchar('=');
	repchar('+',30);
	
	return 0;
}
