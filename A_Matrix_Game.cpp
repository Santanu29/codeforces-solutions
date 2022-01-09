#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int arr[n][m];

	unordered_set<int> r, c;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				r.insert(i);
				c.insert(j);
			}
		}
	}

	int mn = min(n - r.size(), m - c.size());

	cout << (mn % 2 == 0 ? "Vivek" : "Ashish") << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}