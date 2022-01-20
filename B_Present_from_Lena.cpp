#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "  ";

		for (int j = 0; j < i; j++)
			cout << j << " ";

		for (int j = i; j >= 0; j--)
		{
			if (j == 0)
				cout << 0;
			else
				cout << j << " ";
		}
		cout << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "  ";

		for (int j = 0; j < n - i; j++)
			cout << j << " ";

		for (int j = n - i; j >= 0; j--)
		{
			if (j == 0)
				cout << 0;
			else
				cout << j << " ";
		}
		cout << endl;
	}
}