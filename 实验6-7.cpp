/*将两个数组a和b合并，合并后的数组按升序输出。
说明：
1）数组a和b的大小和元素的值从键盘输入；先输入数组大小，再输入数组的值； 
2）合并后的数组输出时，各数值间以空格分开。*/
#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m;
	int *p1 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> p1[i];
	cin >> n;
	int *p2 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p2[i];
	int s = m + n;
	int *p = new int[s];
	for (int i = 0; i < s; i++)
	{
		if (i < m)p[i] = p1[i];
		if (i >= m)p[i] = p2[i - m];
	}
	for (int i = 0; i < s - 1; i++)
		for (int j = 0; j < s - 1 - i; j++)
			if (p[j] > p[j + 1])
			{
				int temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
	for (int i = 0; i < s; i++)
		cout << *(p + i) << " ";
	delete[]p1;
	delete[]p2;
	delete[]p;
}