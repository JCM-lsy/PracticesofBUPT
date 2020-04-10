//VC++实验3.2 欧几里德算法
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "put in two ints" << endl;
	cin >> x >> y;
	int temp = 0, n = 0;
	while (1)
	{
		if (x == y) {
			cout << "n=" << n << "  " << "最大公约数为" << x;
			break;
		}
		else if (x > y)
		{
			temp = y;
			x = x - y;
			y = temp;
		}
		else if (x < y)
		{
			temp = x;
			y = y - x;
			x = temp;
		}
		n++;
	}
}