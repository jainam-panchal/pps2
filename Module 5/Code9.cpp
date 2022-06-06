#include <bits/stdc++.h>
using namespace std;

class time
{

private:
    int t, s, m, h, backup;

public:
    time()
    {
        t = 0;
        s = 0;
        m = 0;
        h = 0;
        backup = 0;
    }

    void getData()
    {
        cout << "Enter Seconds as an Input: ";
        cin >> t;
        backup = t;
        convert();
    }

    void setData(int tt)
    {
        t = tt;
        backup = tt;
        convert();
    }

    void dispData()
    {
        cout << h << " Hours, " << m << " Minutes and " << s << " Seconds.\n";
    }

    void convert()
    {
        h = t / 3600;
        t = t % 3600;
        m = t / 60;
        t = t % 60;
        s = t;
    }

    time operator+(time &tt2)
    {
        time temp;
        temp.backup = backup + tt2.backup;
        temp.t = temp.backup;
        temp.convert();
        return (temp);
    }
};

int main()
{
    class time time1, time2, time3;
    time1.getData();
    time2.getData();

    cout << "\nTime 1: ";
    time1.dispData();

    cout << "Time 2: ";
    time2.dispData();

    time3 = time1 + time2;
    cout << "\nAfter Addition:\n";
    time3.dispData();
}