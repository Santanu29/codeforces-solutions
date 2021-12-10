#include <iostream>
using namespace std;

int main()
{
	int n, s;
	cin >> n >> s;

	int sum = 0;
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		m = (m > a ? m : a);
		sum += a;
	}

	cout << ((sum - m) <= s ? "YES" : "NO") << endl;

	return 0;
}