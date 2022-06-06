/*
    MODULE : 5
    PROGRAM: 3
    DATE   : 30 May 2022
*/

#include <bits/stdc++.h>
using namespace std;
int num = 3;

class catalog
{
private:
    string title;
    string author;
    int yop, copies;

public:
    // constructor
    catalog()
    {
        title = " ";
        author = " ";
        yop = 0;
        copies = 0;
    }

    // destructor
    ~catalog()
    {
        cout << "Class Object Destroted..!!\n";
    }

    // for string comparing
    string getString()
    {
        return title;
    }

    void getData()
    {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Year Of Publication: ";
        cin >> yop;
        cout << "Enter Available Copies: ";
        cin >> copies;
        cout << "Catalog Updated..!\n\n";
    }

    void dispData()
    {
        cout << "Book Title     : " << title << endl;
        cout << "Author Name    : " << author << endl;
        cout << "Year Of Publ.  : " << yop << endl;
        cout << "Total Copies   : " << copies << endl
             << endl;
    }
};

int main()
{
    catalog book[num];

    // getting user data
    for (int i = 0; i < num; ++i)
    {
        book[i].getData();
    }

    string choice;
    cout << "Search Title: " << endl;
    cin >> choice;

    int flag = 0;
    for (int i = 0; i < num; i++)
    {
        if (book[i].getString() == choice)
        {
            book[i].dispData();
            flag += 1;
        }
    }
    if (flag == 0)
    {
        cout << "Not Found :(" << endl;
    }

    return 0;
}