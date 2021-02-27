#include <iostream>
using namespace std;
void read(int arr[10][10], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << "Enter the values in Matrix=";
			cin >> arr[i][j];
		}
	}
}
void dspl(int arr[10][10], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int i, j, r, c;
	int a[10][10];
	cout << "Enter no. of rows=";
	cin >> r;
	cout << "Enter no. of columns=";
	cin >> c;
	read(a, r, c);
	dspl(a, r, c);
	return 0;
}