//VC++ʵ��5.6 ���ǹ�
/*
��Ŀ����
��10��С����Χ��һȦ���ǹ���
��ʦ˳�ηָ�ÿ��һ�������ǹ�����ʼֵΪż����
Ȼ�������й��������
����С����ͬʱ���Լ����ǹ���һ����ұߵ��ˣ�
�ǹ�����Ϊ�������ˣ�����ʦ��Ҫһ���ǹ����ʾ������ٴε�����
����ǹ���һ���࣬��ÿ�˶��ٿ顣��������������һ�����𴫵��ǹ���һ�������ж������˵��ǹ��Ƿ���ȡ�
����
12 2 8 22 16 4 10 6 14 20
���
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

