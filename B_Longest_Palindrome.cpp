#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	string arr[n];

	string ans = "", r = "";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		string c = arr[i];
		reverse(c.begin(), c.end());
		if (c == arr[i] && r.empty())
			r += arr[i];
		else
		{
			for (int j = 0; j < i; j++)
			{
				if (c == arr[j])
				{
					ans += c;
					break;
				}
			}
		}
	}

	cout << ans.size() * 2 + r.size() << endl;
	cout << ans + r;
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
	return 0;
}