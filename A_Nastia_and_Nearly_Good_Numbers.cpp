#include <iostream>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;

		if (b == 1)
			cout << "NO\n";
		else
			cout << "YES\n"
				 << a << " " << a * b << " " << a * (b + 1) << endl;
	}
	return 0;
}