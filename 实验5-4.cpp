//VC++实验5.4 计算排列
/*
题目描述
编写程序计算排列，排列的公式P(n,m)=n!/(n-m)!，其中n>=m。
请使用两个函数分别实现计算阶乘和计算排列。键盘输入n和m的值，输出它们的排列值。
输入
4 3
输出
24
*/
#include<iostream>
using namespace std;
int jiecheng(int x);
int pailie(int x, int y);
int main()
{
	int m, n;
	cin >> n >> m;
	cout<<pailie(n, m)<<endl;
}
int jiecheng(int x)
{
	int sum = 1;
	for (int i = 1; i < x + 1; i++)
	{
		sum = sum * i;
	}
	return sum;
}
int pailie(int x, int y)
{
	int sum = 0;
	sum = jiecheng(x) / jiecheng(x - y);
	return sum;
}