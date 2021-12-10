#include <iostream>
using namespace std;

int main()
{
	int n, t;

	cin >> n >> t;
	int a[n];
	for (int i = 1; i < n; i++)
		cin >> a[i];

	int x = 1;
	while (x < t)
		x += a[x];

	cout << ((x == t) ? "YES" : "NO") << endl;
	return 0;
}