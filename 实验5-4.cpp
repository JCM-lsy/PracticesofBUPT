//VC++ʵ��5.4 ��������
/*
��Ŀ����
��д����������У����еĹ�ʽP(n,m)=n!/(n-m)!������n>=m��
��ʹ�����������ֱ�ʵ�ּ���׳˺ͼ������С���������n��m��ֵ��������ǵ�����ֵ��
����
4 3
���
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