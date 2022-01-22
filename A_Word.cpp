#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int u = 0, l = 0;

	for (char ch : s)
	{
		if (ch >= 'a' && ch <= 'z')
			l++;
		else
			u++;
	}

	if (u > l)
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	else
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << endl;
}