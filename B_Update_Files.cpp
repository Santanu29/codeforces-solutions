#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n, k;
	cin >> n >> k;
	ll curr = 1, ans = 0;

	while (curr < k)
	{
		curr *= 2;
		ans++;
	}
	if (curr < n)
		ans += ((n - curr) / k) + ((n - curr) % k == 0 ? 0 : 1);

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