//VC++实验5.5 评分统计II
/*
题目描述
歌手大奖赛共有10位评委，为每位选手打分（double型）。
预赛部分歌手的分数，为去掉1个最高分、1个最低分后其余8个分数的平均值；
决赛部分歌手的分数，为去掉2个最高分、2个最低分后其余6个分数的平均值。
通过键盘输入10位评委的打分，以及当前处于哪个阶段（预赛部分用1表示，决赛部分用2表示）。
主函数中，只负责输入数据、调用分数计算函数、输出结果，评分计算部分编写独立函数完成。
输入
98.5 88 90 93 94 90.4 89 92 88.6 97 2
输出
91.4
*/
#include<iostream>
#include<iomanip>
using namespace std;
void order(double *p)
{
	for(int i=0;i<10-1;i++)
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				double temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
}
double juesai(double *p)
{
	double sum = 0;
	for (int i = 2; i < 8; i++)
		sum += *(p + i);
	double x = sum / 6.0;
	return x;
}
double yusai(double *p)
{
	double sum = 0;
	for (int i = 1; i < 9; i++)
		sum += *(p + i);
	double x = sum / 8.0;
	return x;
}
int main()
{
	double *p = new double[10];
	for (int i = 0; i < 10; i++)
		cin >> *(p + i);
	order(p);
	/*for (int i = 0; i < 10; i++)
		cout << *(p + i) << " ";*/
	int x;
	cin >> x;
	if (x == 1)cout <<setprecision(3)<< yusai(p)<<endl;
	if (x == 2)cout <<setprecision(3)<< juesai(p) << endl;
	delete[]p;
	return 0;
}

