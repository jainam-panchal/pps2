#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int rn, marks[6], total;
    float per;
    string pclass;

public:
        student()
    {
        name = "DefaultStudentName";
        rn = 0;
        for (int i = 0; i < 6; i++)
        {
            marks[i] = 0;
        }
        pclass = "-";
        total = 0;
        per = 0.0;
    }

    ~student()
    {
        cout << "Obj Destroyed\n";
    }

    void getData()
    {
        cout << "Enter Student's Name               : ";
        cin >> name;
        cout << "Enter Student's Roll Number        : ";
        cin >> rn;
        cout << "Enter Marks of 6 subjects in order : ";
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
            if (marks[i] > 100)
            {
                marks[i] = 0;
            }
        }

        cout << "Data has been successfully added.\n\n";
    }

    void dispData()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number : " << rn << endl;
        for (int i = 0; i < 6; ++i)
        {
            cout << "Scored " << marks[i] << " Out of 100 in Subject " << i + 1 << endl;
        }
        cout << "Percentage : " << per << endl;
        cout << "Class	   : " << pclass << endl
             << endl;
    }

    float getPerc()
    {
        return per;
    }

    void calc()
    {
        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }
        per = total * 100 / 600;

        if (per >= 70)
        {
            pclass = "First Class with Distinction";
        }
        else if (per >= 60 && per < 70)
        {
            pclass = "First Class";
        }
        else if (per >= 50 && per < 60)
        {
            pclass = "Second Class";
        }
        else
        {
            pclass = "Failed";
        }
    }

    static void sortData(student *arr, int n)
    {
        int i, j;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j].getPerc() > arr[j + 1].getPerc())
                {
                    swap(arr[j].name, arr[j + 1].name);
                    swap(arr[j].rn, arr[j + 1].rn);
                    swap(arr[j].per, arr[j + 1].per);
                    swap(arr[j].pclass, arr[j + 1].pclass);
                    for (int i = 0; i < 6; i++)
                    {
                        swap(arr[j].marks[i], arr[j + 1].marks[i]);
                    }
                }
            }
        }
    }
};

int main()
{
    student s[4];
    for (int i = 0; i < 4; i++)
    {
        s[i].getData();
        s[i].calc();
    }
    cout << "--------------------------------" << endl;
    student::sortData(s, 4);
    for (int i = 0; i < 4; i++)
    {
        s[i].dispData();
    }

    cout << "\n\n\n";
    return 0;
}