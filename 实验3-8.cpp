//VC++ʵ��3.8 �ֿ����
/*
ĳ�ֿ⹲��ABCDE���ֻ��ÿ����Ҫ������������ͬ��ÿ�ֻ���ĵ��۲�ͬ��������ʾ���ɼ����������ֻ�����Ҫ���������������������ղֿ���֧�����ٻ�����ڲ���ʱ��һ������ABCDE��˳�򲹻�������ʹ��switch�����ѭ������д��
��������  ���ﵥ��
  A             10
  B             5
  C             3
  D             20
  E             13
����
B 3 E 2 A 1 D 4 C 10
���
161
*/
#include<iostream>
using namespace std;
int main()
{
	int m, sum = 0;
	char M;
	for (int i = 0; i < 5; i++)
	{
		cin >> M >> m;
		switch (M)
		{
		case'A' :
			sum += 10 * m;
			break;
		case'B':
			sum += 5 * m;
			break;
		case'C':
			sum += 3 * m;
			break;
		case'D':
			sum += 20 * m;
			break;
		case'E':
			sum += 13 * m;
			break;
		}
	}
	cout << sum << endl;
}