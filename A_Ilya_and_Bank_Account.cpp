#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// if (n >= 0)
	// {
	// 	cout << n;
	// 	return 0;
	// }

	// int l1 = abs(n % 10);
	// int l2 = abs((n % 100) / 10);
	// cout << l1 << " " << l2;

	int ans = n;
	if (n / 10 > ans)
		ans = n / 10;
	if ((n / 100) * 10 + n % 10 > ans)
		ans = (n / 100) * 10 + n % 10;

	cout << ans;
	return 0;
}