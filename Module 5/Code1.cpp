#include <bits/stdc++.h>
using namespace std;
int num = 5;

class player
{
private:
    string pname;
    string tname;
    float avg;

public:
    // constructor
    player()
    {
        pname = "";
        tname = "";
        avg = 0.0;
    }

    // destructor
    ~player()
    {
        cout << "Class Object Destroyed..!" << endl;
    }

    // to access avg for sorting purposes
    int getAvg()
    {
        return avg;
    }
    // to access team for sorting purposes
    string &getTeam()
    {
        return tname;
    }
    // Getting Data From User
    void getData()
    {
        cout << "Enter Player Name: ";
        cin >> pname;
        cout << "Enter Team Name: ";
        cin >> tname;
        cout << "Enter Batting Average: ";
        cin >> avg;
        cout << "Player Data added..!!" << endl
             << endl;
    }

    // Printing Data
    void dispData()
    {
        cout << "Player Name: " << pname << endl;
        cout << "Team Name: " << tname << endl;
        cout << "Batting Average: " << avg << endl
             << endl;
    }
    static void sortData(player *arr, int n)
    {
        int i, j;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j].getAvg() > arr[j + 1].getAvg())
                {
                    swap(arr[j].pname, arr[j + 1].pname);
                    swap(arr[j].tname, arr[j + 1].tname);
                    swap(arr[j].avg, arr[j + 1].avg);
                }
            }
        }
    }
    static void teamSort(player *team, int n)
    {
    }
};

int main()
{
    char c; // for user choice option

    // class object instance created
    class player p[num];

    // get data fucntion call
    for (int i = 0; i < num; i++)
    {
        p[i].getData();
    }

    player::sortData(p, num);

    // print data function call
    cout << "Do you want to print the data? y/n ";
    cin >> c;

    if (c == 'y')
    {
        for (int i = 0; i < num; i++)
        {
            p[i].dispData();
        }
    }
    else
    {
        cout << "Terminating Program" << endl;
    }

    return 0;
}

// cout << "Do you want to print the data? y/n" << endl;
// cin >> c;
// if (c == 'y')
// {
//     for (int i = 0; i < num; i++)
//     {
//         p[i].dispData();
//     }
// }
// else if (c == 'n')
// {
//     cout << " Input Accepted" << endl;
// }
// else
// {
//     cout << " Invalid" << endl;
// }
