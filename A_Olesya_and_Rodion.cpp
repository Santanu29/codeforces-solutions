#include <iostream>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	if (n == 1 && t == 10)
		cout << "-1\n";
	else
	{
		cout << (t == 10 ? 1 : t);
		for (int i = 0; i < n - 1; i++)
			cout << "0";
		cout << endl;
	}
	return 0;
}