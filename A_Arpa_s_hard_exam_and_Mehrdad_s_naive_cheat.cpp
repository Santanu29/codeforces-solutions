#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[4] = {6, 8, 4, 2};
	cout << (n == 0 ? 1 : a[n % 4]);
	return 0;
}