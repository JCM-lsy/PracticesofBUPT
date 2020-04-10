#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
const int N = 10;
int main()
{
	int a[N], i, j, temp, b;
	srand(time(NULL));
	for (i = 0; i < N; i++)
		a[i] = rand() % 100;         //随机生成0~99
	for (i = 0; i < N; i++)
		cout << setw(3) << a[i];
	cout << endl;
	for (i = 0; i < N - 1; i++)           //不必使最后一个参与大循环，因为如果他是最大的就没必要比，不是最大的一定会有更大的把它换掉
	{
		for (int j = i + 1; j < N; j++)   //此处需要比较最后一个
		{
			if (a[i] > a[j])             //大小数交换数值
			{
				b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	for (i = 0; i < N; i++)
		cout << setw(3) << a[i];
	cout << endl;
}