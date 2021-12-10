#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string hello = "hello";
	int counter = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (hello[counter] == s[i])
			counter++;
		if (counter == 5)
			break;
	}

	cout << (counter == 5 ? "YES" : "NO") << endl;
	return 0;
}