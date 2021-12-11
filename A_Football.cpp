#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string t1, t2;
	int c1 = 0, c2 = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == t1 || t1 == "")
		{
			t1 = s;
			c1++;
		}
		else
		{
			t2 = s;
			c2++;
		}
	}
	cout << (c1 > c2 ? t1 : t2) << endl;
	return 0;
}