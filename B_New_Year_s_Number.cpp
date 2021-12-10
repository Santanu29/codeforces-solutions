#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int c2021 = n % 2020;
		int c2020 = (n - c2021) / 2020 - c2021;

		if (c2020 >= 0 && c2021 * 2021 + c2020 * 2020 == n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}