//VC++ʵ��3.2 ŷ������㷨
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
			cout << "n=" << n << "  " << "���Լ��Ϊ" << x;
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