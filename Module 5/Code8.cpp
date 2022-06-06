#include <iostream>
using namespace std;

class Distance
{
	int feet;
	int inch;
public:
    
    Distance(){
        feet = 0;
        inch = 0;
    }

	void getData()
	{
		cout<<"Enter feet,inch : ";
		cin>>feet>>inch;
	}

	void putData()
	{
		cout<<"\nFeet="<<feet<<", Inch="<<inch;
	}

	void operator +=(Distance d2)
	{
		feet+=d2.feet;
		inch+=d2.inch;
    
        while(inch>12){
		inch-=12;
		feet++;
        }
	}
	
	~Distance(){
	    cout << "Obj Destroyed..!\n";
	}
};

int main()
{
	Distance d1,d2;

	d1.getData();
	d2.getData();

	d1+=d2;

	d1.putData();
	cout << endl << endl;
	return 0;
}