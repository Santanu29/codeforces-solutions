#include <iostream>
using namespace std;

bool isTen(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return (sum == 10);
}

int main()
{
	int n;
	cin >> n;
	n -= 1;
	int a = 19;
	while (n)
	{
		a++;
		if (isTen(a))
		{
			n--;
		}
	}
	cout << a << endl;
	return 0;
}