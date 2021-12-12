#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	cout << ((n - a) > b ? b + 1 : n - a);
	return 0;
}