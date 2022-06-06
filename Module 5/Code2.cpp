/*
	MODULE NO : 5
	PROGRAM NO: 2
	DATE: 30/5/22
*/

#include <bits/stdc++.h>
using namespace std;
int num = 3;

class book
{
private:
	string book_name;
	string author_name;
	int qty;
	float rate;
	float total;

public:
	book()
	{
		book_name = "";
		author_name = "";
		qty = 0;
		rate = 0.0;
	}

	void getData()
	{
		cout << "Enter Book Name: ";
		cin >> book_name;

		cout << "Enter Author Name: ";
		cin >> author_name;

		cout << "Enter Available Qty: ";
		cin >> qty;
		cout << "Enter Rate: ";
		cin >> rate;
		cout << "BOOK HAS BEEN ADDED TO THE DATABASE..!!\n\n";
	}

	void dispData()
	{
		cout << "Book Name	: " << book_name << endl;
		cout << "Author Name	: " << author_name << endl;
		cout << "Rate		: " << rate << endl;
		cout << "Available Qty	: " << qty << endl;
		cout << "Total Price 	: " << total << endl
			 << endl;
	}

	void calcTotal()
	{
		total = rate * qty;
	}

	float getTotal()
	{
		return total;
	}

	static void sortData(book *arr, int n)
	{
		int i, j;
		for (i = 0; i < n - 1; ++i)
		{
			for (j = 0; j < n - 1; ++j)
			{
				if (arr[j].getTotal() > arr[j + 1].getTotal())
				{
					swap(arr[j].book_name, arr[j + 1].book_name);
					swap(arr[j].author_name, arr[j + 1].author_name);
					swap(arr[j].qty, arr[j + 1].qty);
					swap(arr[j].rate, arr[j + 1].rate);
					swap(arr[j].total, arr[j + 1].total);
				}
			}
		}
	}
};

int main()
{

	char choice;
	int i;
	class book b[num];

	// getting user data and calculating the total
	for (i = 0; i < num; ++i)
	{
		b[i].getData();
		b[i].calcTotal();
	}

	// not sorted
	cout << "Do you want to print the data? (NOT SORTED) y/n\n";
	cin >> choice;
	if (choice == 'y')
	{
		for (i = 0; i < num; ++i)
		{
			b[i].dispData();
		}
	}
	else
	{
		cout << "Cancelling..!!";
	}

	// want to sort?
	cout << "Do you want to sort the data according Total Price? y/n\n";
	cin >> choice;
	if (choice == 'y')
	{
		book::sortData(b, num);
	}
	else
	{
		cout << "Cancelling..!!";
	}

	// printing sorted data
	cout << "Do you want to print the data? (NOT SORTED) y/n\n";
	cin >> choice;
	if (choice == 'y')
	{
		for (i = 0; i < num; ++i)
		{
			b[i].dispData();
		}
	}
	else
	{
		cout << "Cancelling..!!";
	}

	return 0;
}
