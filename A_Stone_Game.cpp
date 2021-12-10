#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int idxmin = min_element(v.begin(), v.end()) - v.begin();
	int idxmax = max_element(v.begin(), v.end()) - v.begin();

	cout << min({max(idxmin, idxmax) + 1,
				 (n - 1) - min(idxmin, idxmax) + 1,
				 (n - 1) - idxmax + idxmin + 2,
				 (n - 1) - idxmin + idxmax + 2})
		 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}