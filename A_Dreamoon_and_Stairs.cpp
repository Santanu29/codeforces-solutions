#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int lower_bound = (n + 1) / 2;
	int ans = (int)ceil((double)lower_bound / m) * m;

	cout << (ans > n ? -1 : ans) << endl;

	return 0;
}