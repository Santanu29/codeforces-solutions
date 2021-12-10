#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int s, n;
	cin >> s >> n;

	vector<pair<int, int>> v(n);

	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		v[i] = make_pair(x, y);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (v[i].first >= s)
		{
			cout << "NO";
			return 0;
		}
		else
		{
			s += v[i].second;
		}
	}
	cout << "YES";
	return 0;
}