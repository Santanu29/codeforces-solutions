#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int bx, by;
		cin >> bx >> by;
		if (bx == 0 && by == 0)
		{
			cout << "0 0" << endl;
			continue;
		}
		int dist = bx + by;
		if (dist % 2 == 1)
			cout << "-1 -1" << endl;
		else
		{
			int cdist = dist / 2;

			if (bx >= by)
				cout << cdist << " " << 0 << endl;
			else
				cout << 0 << " " << cdist << endl;
		}
	}
	return 0;
}