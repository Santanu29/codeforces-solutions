#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int i = 0;
	while (true)
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
			i += 3;
		else
			break;
	}

	for (; i < s.length(); i++)
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			while (1)
			{
				if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
					i += 3;
				else
					break;
			}
			i--;
			cout << " ";
		}
		else
			cout << s[i];
	}

	return 0;
}