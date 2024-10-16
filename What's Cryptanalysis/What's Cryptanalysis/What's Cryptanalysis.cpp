#include <iostream>
using namespace std;
int main()
{
	int a, b = 0;
	int num[10000];
	while (cin >> num[b])
	{
		a = num[b];
		for (int i = 0; i <= b; i++)
		{
			if (a <= num[i])
			{
				for (int j = b + 1; j > i; j--)
				{
					num[j] = num[j - 1];
				}
				num[i] = a;
				break;
			}

		}

		if (b % 2 == 0)
			cout << num[b / 2] << endl;
		else
			cout << (num[b / 2] + num[b / 2 + 1]) / 2 << endl;
		b++;
	}
	return 0;
}