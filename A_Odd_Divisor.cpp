#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n)
{
	for (int i = 1; i <= 60; i++)
	{
		if (1ll << i == n)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		solve(n);
	}
	return 0;
}