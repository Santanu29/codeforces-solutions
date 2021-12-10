#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x = 0;
	while (n--)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());

		if (s[0] == '+')
			x++;
		else
			x--;
	}

	cout << x;
	return 0;
}