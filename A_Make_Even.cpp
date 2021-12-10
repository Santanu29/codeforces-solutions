#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string n;
		cin >> n;

		int len = n.length();
		if ((n[len - 1] - '0') % 2 == 0)
		{
			cout << 0 << endl;
		}
		else if ((n[0] - '0') % 2 == 0)
		{
			cout << 1 << endl;
		}
		else
		{
			bool flag = false;
			for (int i = 1; i < len - 1; i++)
			{
				if ((n[i] - '0') % 2 == 0)
				{
					flag = true;
					break;
				}
			}

			cout << (flag ? 2 : -1) << endl;
		}
	}
	return 0;
}