#include <bits/stdc++.h>
using namespace std;

bool prime[101];

void solve()
{
	int n;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
		{
			cout << "1\n"
				 << s[i] << endl;
			return;
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (!prime[(s[i] - '0') * 10 + (s[j] - '0')])
			{
				cout << "2\n"
					 << s[i] << s[j] << endl;
				return;
			}
		}
	}
}

int main()
{
	for (int i = 2; i < 100; i++)
	{
		prime[i] = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				prime[i] = false;
			}
		}
	}

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}