#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	map<int, int> mp;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int ans = -1;
	for (int i = 0; i < n; i++)
	{
		if (mp.count(arr[i]))
		{
			ans = max(ans, n - (i - mp[arr[i]]));
		}
		mp[arr[i]] = i;
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