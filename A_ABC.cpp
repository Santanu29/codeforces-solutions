#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int o, z;

	o = count(s.begin(), s.end(), '1');
	z = count(s.begin(), s.end(), '0');

	if (n == 1 || (n == 2 && o == z))
	{
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}