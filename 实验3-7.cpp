//VC++ʵ��3.7 �������Ǻ���
//��������һ������1��������n���ж������������Ǻ�����������������������������������Ǻ����������������Լ����Լ������1����������Լ�����ÿո�ָ���
/*
����
13
���
����
��������
24
�������
1 2 3 4 6 8 12 24
*/
#include<iostream>
using namespace std;
int main()
{
	int  x;
	cin >> x;
	int sum = 0;
	for (int i = 2; i < x / 2 + 1; i++)
	{
		int m = x % i;
		if (m == 0)sum++;
	}
	if (!sum)cout << "����" << endl;
	if (sum)
	{
		cout << 1 << " ";
		for (int i = 2; i < x / 2 + 1; i++)
		{
			int m = x % i;
			if (m == 0)cout << i << " ";
		}
		cout << x << endl;
	}
}