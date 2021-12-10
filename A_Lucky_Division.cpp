#include <iostream>
using namespace std;

bool isLucky(int num)
{
	while (num > 0)
	{
		if (num % 10 != 4 && num % 10 != 7)
			return false;
		num = num / 10;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int counter = 4;

	while (counter <= n)
	{
		if (isLucky(counter) && n % counter == 0)
		{
			cout << "YES";
			return 0;
		}
		counter++;
	}

	cout << "NO";
	return 0;
}