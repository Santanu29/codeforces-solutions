#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int ones = 0, twos = 0;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			if (c == 1)
				ones++;
			else
				twos++;
		}
		if ((ones + (twos * 2)) % 2 != 0)
		{
			cout << "NO\n";
			continue;
		}
		else
		{
			int sum = (ones + (twos * 2)) / 2;
			if (sum % 2 == 0 || (sum % 2 == 1 && ones > 0))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
	return 0;
}