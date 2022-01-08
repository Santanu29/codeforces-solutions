#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (arr[0] != 25)
	{
		cout << "NO";
		return 0;
	}

	int t25 = 1, t50 = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] == 25)
			t25++;
		else if (arr[i] == 50)
		{
			if (t25 > 0)
			{
				t50++;
				t25--;
			}
			else
			{
				cout << "NO";
				return 0;
			}
		}
		else
		{
			if (t50 > 0 && t25 > 0)
			{
				t50--;
				t25--;
			}
			else if (t25 >= 3)
			{
				t25 -= 3;
			}
			else
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}