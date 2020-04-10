// VC++实验4.5 计算第几天
/*
题目描述
定义一个结构型变量（包括年、月、日），并从键盘上获取该变量的值，计算该日在本年中是第几天，输出到屏幕上，格式为：“X年X月X日是本年中的第X天。”（提示：注意闰年问题）。
输入
2017 4 1
输出
2017年4月1日是本年中的第91天。
样例输入
2004 12 21
样例输出
2004年12月21日是本年中的第356天
*/
#include<iostream>
using namespace std;
struct Date
{
	int year;
	int month;
	int day;
};
bool judge(int y)
{
	int sum = 0;
	if (y % 100==0)
	{
		if (y % 400==0)return true;
		else return false;
	}
	else {
		if (y % 4 == 0)return true;
		else return false;
	}
}
int main()
{
	Date d;
	cin >> d.year >> d.month >> d.day;
	int a[12];
	if (judge(d.year))
		a[1] = 29;
	else a[1] = 28;
	a[0] = a[2] = a[4] = a[6] = a[7] = a[9] = a[11] = 31;
	a[3] = a[5] = a[8] = a[10] = 30;
	int sum = 0;
	for (int i = 0; i < d.month-1; i++)
		sum += a[i];
	sum += d.day;
	cout << d.year << "年" << d.month << "月" << d.day << "日是本年中的第" << sum<< "天" << endl;
}