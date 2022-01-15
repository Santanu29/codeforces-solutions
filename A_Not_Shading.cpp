#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m, r, c;
	cin >> n >> m >> r >> c;
	r--;
	c--;

	string arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	bool allWhite = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'B')
			{
				allWhite = false;
				break;
			}
		}
	}

	if (allWhite)
	{
		cout << -1 << endl;
		return;
	}

	if (arr[r][c] == 'B')
	{
		cout << 0 << endl;
		return;
	}

	// bool inRow = false, inCol = false;

	for (int i = 0; i < m; i++)
	{
		if (arr[r][i] == 'B')
		{
			cout << 1 << endl;
			return;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i][c] == 'B')
		{
			cout << 1 << endl;
			return;
		}
	}

	cout << 2 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}