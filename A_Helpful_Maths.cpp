#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<char> v;

	for (int i = 0; i < s.length(); i += 2)
	{
		v.push_back(s[i]);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < s.length(); i += 2)
	{
		s[i] = v[i / 2];
	}

	cout << s;
	return 0;
}