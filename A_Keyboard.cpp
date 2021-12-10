#include <iostream>
#include <string>
using namespace std;

int main()
{
	string q = "qwertyuiop";
	string a = "asdfghjkl;";
	string z = "zxcvbnm,./";

	char ch;
	cin >> ch;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (s[i] == q[j])
			{
				s[i] = (ch == 'L' ? q[j + 1] : q[j - 1]);
				break;
			}
			else if (s[i] == a[j])
			{
				s[i] = (ch == 'L' ? a[j + 1] : a[j - 1]);
				break;
			}
			else if (s[i] == z[j])
			{
				s[i] = (ch == 'L' ? z[j + 1] : z[j - 1]);
				break;
			}
		}
	}
	cout << s;
}