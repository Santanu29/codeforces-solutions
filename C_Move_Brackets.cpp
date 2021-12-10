#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		// int open = 0, close = 0;
		int a = 0, ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '(')
				a++;
			else
				a--;
			if (a < 0)
			{
				a = 0;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}