#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll x, y, a, b;
	cin >> x >> y >> a >> b;

	ll cost1 = (abs(x - y) * a) + ((max(x, y) - abs(x - y)) * b);
	ll cost2 = ((abs(x) + abs(y)) * a);
	cout << min(cost1, cost2) << endl;
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