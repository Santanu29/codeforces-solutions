#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int c[3] = {0};

	int c0 = 0, c1 = 0, c2 = 0;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		c[x % 3]++;
	}

	int ans = 0;
	while (c[0] != c[1] || c[1] != c[2])
	{
		for (int i = 0; i < 3; i++)
		{
			if (c[i] > n / 3)
			{
				ans++;
				c[i]--;
				c[(i + 1) % 3]++;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}