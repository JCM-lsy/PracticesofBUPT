//VC++实验5.3 斐波那契数列
/*
题目描述
用非递归函数，求Fibonacci数列第n项。键盘输入一个n，输出Fibonacci数列第n项的值。
输入
3
输出
2
*/
//还是递归简单，我选择递归
#include<iostream>
using namespace std;
int Fabo(int x)
{
	int sum = 0;
	if (x == 0)sum = 1;
	else if (x == 1)sum = 1;
	else sum = sum + Fabo(x - 1)+Fabo(x-2);
	return sum;
}
int main()
{
	int x;
	cin >> x;
	cout << Fabo(x) << endl;
}