#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	bool flag = true;

	for (int i = 1; i < s.length(); i++)
	{
		if (islower(s[i]))
		{
			flag = false;
			break;
		}
	}

	if (flag)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (islower(s[i]))
				s[i] = toupper(s[i]);
			else
				s[i] = tolower(s[i]);
		}
	}

	cout << s;
	return 0;
}