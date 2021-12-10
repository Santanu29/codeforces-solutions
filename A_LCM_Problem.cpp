#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;

		if (r >= 2 * l)
		{
			cout << l << " " << (l * 2) << endl;
		}
		else
			cout << "-1 -1\n";
	}
	return 0;
}