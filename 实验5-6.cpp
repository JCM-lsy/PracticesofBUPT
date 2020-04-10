//VC++实验5.6 分糖果
/*
题目描述
有10个小朋友围成一圈分糖果，
老师顺次分给每人一定数量糖果（初始值为偶数）
然后按照下列规则调整，
所有小朋友同时把自己的糖果分一半给右边的人，
糖果数变为奇数的人，向老师补要一块糖果，问经过多少次调整后，
大家糖果数一样多，且每人多少块。建立两个函数，一个负责传递糖果，一个负责判断所有人的糖果是否相等。
输入
12 2 8 22 16 4 10 6 14 20
输出
16 18*/
#include<iostream>
using namespace std;
void pass(int *p);
int judge(int *p);
int main()
{
	int *p = new int[10];
	for (int i = 0; i < 10; i++)
		cin >> p[i];
	int count = 0;
	while (!judge(p)) 
	{
		pass(p);
		count++;
	}
	cout << count << " " << *p << endl;
}
void pass(int *p)
{
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = p[i]/2;
	*p = a[0] + a[9];
	for (int i = 0; i < 10; i++)
	{
		p[i + 1] = a[i + 1] + a[i];
	}
	for (int i = 0; i < 10; i++)
		if (p[i] % 2 != 0)p[i]++;
	cout << "tiaoshi" << " ";
	for (int i = 0; i < 10; i++)
		cout << p[i] << " ";
	cout << endl;
}
int judge(int *p)
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
		sum = sum + *p - p[i];
	if (sum == 0)return 1;
	if (sum != 0)return 0;
}

