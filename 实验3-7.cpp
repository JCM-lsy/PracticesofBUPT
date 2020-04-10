//VC++实验3.7 素数还是合数
//键盘输入一个大于1的正整数n，判断其是素数还是合数，如果是素数，则输出“素数”，如果是合数，则输出其所有约数（约数包括1和它本身），约数间用空格分隔。
/*
输入
13
输出
素数
样例输入
24
样例输出
1 2 3 4 6 8 12 24
*/
#include<iostream>
using namespace std;
int main()
{
	int  x;
	cin >> x;
	int sum = 0;
	for (int i = 2; i < x / 2 + 1; i++)
	{
		int m = x % i;
		if (m == 0)sum++;
	}
	if (!sum)cout << "素数" << endl;
	if (sum)
	{
		cout << 1 << " ";
		for (int i = 2; i < x / 2 + 1; i++)
		{
			int m = x % i;
			if (m == 0)cout << i << " ";
		}
		cout << x << endl;
	}
}