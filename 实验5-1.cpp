//VC++实验5.1 温度转换
/*
题目描述
编写函数，把华氏温度F（double型）转换为摄氏温度C（double型），公式为C=(F-32)/1.8。键盘输入一个华氏温度，可以得到相应的摄氏温度。
输入
32
输出
0
*/
#include<iostream>
using namespace std;
int main()
{
	double f, c;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << c << endl;
}