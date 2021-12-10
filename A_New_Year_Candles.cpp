#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int ans = a;
	while (a >= b)
	{
		int d = a / b;
		ans += d;
		int m = a % b;
		a = d + m;
	}
	cout << ans << endl;
	return 0;
}