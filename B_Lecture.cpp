#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, string> mp;

	for (int i = 0; i < m; i++)
	{
		string a, b;
		cin >> a >> b;
		mp[a] = (a.length() <= b.length() ? a : b);
	}

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		cout << mp[s] << " ";
	}
	return 0;
}