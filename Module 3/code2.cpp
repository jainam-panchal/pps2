#include <iostream>
using namespace std;

void addMatrix(int &rr, int &cc)
{
	int m1[5][5];
	cout << "Matrix 1\n";
	for (int i = 0; i < rr; ++i)
	{
		for (int j = 0; j < cc; ++j)
		{
			cout << "Row[" << (i + 1) << "]" << "Col[" << (j + 1) << "] = ";
			cin >> m1[i][j];
		}
	}

	int m2[5][5];
	cout << "Matrix 2\n";
	for (int i = 0; i < rr; ++i)
	{
		for (int j = 0; j < cc; ++j)
		{
			cout << "Row[" << (i + 1) << "]" << "Col[" << (j + 1) << "] = ";
			cin >> m2[i][j];
		}
	}
	
	int m3[5][5];
	cout << "Result of Matrix Addition\n";
	for (int i = 0; i < rr; ++i)
	{
		for (int j = 0; j < cc; ++j)
		{
			m3[i][j] = m1[i][j] + m2[i][j];
			cout << "Row[" << (i + 1) << "]" << "Col[" << (j + 1) << "] = ";
			cout<<m3[i][j]<<endl;
		}
	}
}

int main()
{
	cout << "Enter Matrix Size: ";
	int r, c;
	cin >> r >> c;
	addMatrix(r, c);
	return 0;
}
