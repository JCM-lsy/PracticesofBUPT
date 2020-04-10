#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n = 1;
	for (int i = 0; i < 100; i++)

	{		
		a[i] = n;
		n++;
	}
	for (int i = 0; i < 100; )
	{
		for(int j = 0; j < 10; j++)
		{
			cout << a[i] << " ";
			i++;
		}
		cout << endl;
	}
	int m = 1;
	cout << 3 << " ";
	for(int i=3;i<100;i++)
	{
		int sum = 0;
		for (int j = 2; j < i / 2 + 1; j++)
		{
			int x;
			x = i % j;
			if (x == 0)
				sum++;
		}
		if (sum == 0)
		{
			m++;
			if (m < 10)
				cout << a[i] << " ";
			else if (m >= 10)
			{
				m = 0;
				cout << a[i] << endl;
			}

		}
	}
}