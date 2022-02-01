#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;

	int a = count(s.begin(), s.end(), '0');
	int b = count(s.begin(), s.end(), '1');

	cout << (a != b ? min(a, b) : a - 1) << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}