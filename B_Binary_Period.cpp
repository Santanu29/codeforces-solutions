#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;

	int n = s.size();

	bool flag = true;

	for (int i = 1; i < n; i++)
	{
		if (s[i] != s[i - 1])
		{
			flag = false;
			break;
		}
	}

	if (flag)
		cout << s << endl;
	else
	{
		for (int i = 0; i < n; i++)
			cout << "01";
		cout << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}