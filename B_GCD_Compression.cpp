#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	vector<int> odd, even;

	for (int i = 0; i < (2 * n); i++)
	{
		int x;
		cin >> x;
		if (x % 2)
			odd.push_back(i + 1);
		else
			even.push_back(i + 1);
	}

	vector<pair<int, int>> ans;

	for (int i = 0; i + 1 < odd.size(); i += 2)
	{
		ans.push_back({odd[i], odd[i + 1]});
	}
	for (int i = 0; i + 1 < even.size(); i += 2)
	{
		ans.push_back({even[i], even[i + 1]});
	}

	for (int i = 0; i < n - 1; i++)
		cout << ans[i].first << " " << ans[i].second << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}