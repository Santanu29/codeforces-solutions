#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int even = 0, odd = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x % 2 == 0)
			even++;
		else
			odd++;
	}

	if ((even == 0) && (odd % 2 == 1))
		cout << "YES\n";
	else if (even > 0 && odd > 0)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}