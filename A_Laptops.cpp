#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<pair<int, int>> vp(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vp[i].first >> vp[i].second;
	}
	sort(vp.begin(), vp.end());
	int mx = -1;
	for (int i = 0; i < n; ++i)
	{
		if (vp[i].second < mx)
		{
			cout << "Happy Alex" << endl;
			return 0;
		}
		mx = max(mx, vp[i].second);
	}
	cout << "Poor Alex" << endl;

	return 0;
}