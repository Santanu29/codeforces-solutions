#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	for (int i = 0; i < n - ((n + 3) / 4); i++)
		cout << 9;
	for (int i = 0; i < (n + 3) / 4; i++)
		cout << 8;
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}