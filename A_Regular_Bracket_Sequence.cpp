#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		if (s.length() % 2 == 0 && s[0] != ')' && s.back() != '(')
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}