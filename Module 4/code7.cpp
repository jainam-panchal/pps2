#include <iostream>
using namespace std;

class myclass
{

private:
    int objNum;
    static int count;

public:
    myclass()
    {
        objNum = ++count;
    }
    ~myclass()
    {
        --count;
    }

    void showNo()
    {
        cout << "No of Object is : " << objNum << endl;
    }

    static void showCount()
    {
        cout << "Count: " << count << endl;
    }
};

int myclass::count;
int main()
{
    myclass data[10];
    myclass::showCount();

    data[1].showNo();
    return 0;
}