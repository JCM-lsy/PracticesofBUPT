// VC++ʵ��4.5 ����ڼ���
/*
��Ŀ����
����һ���ṹ�ͱ����������ꡢ�¡��գ������Ӽ����ϻ�ȡ�ñ�����ֵ����������ڱ������ǵڼ��죬�������Ļ�ϣ���ʽΪ����X��X��X���Ǳ����еĵ�X�졣������ʾ��ע���������⣩��
����
2017 4 1
���
2017��4��1���Ǳ����еĵ�91�졣
��������
2004 12 21
�������
2004��12��21���Ǳ����еĵ�356��
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
	cout << d.year << "��" << d.month << "��" << d.day << "���Ǳ����еĵ�" << sum<< "��" << endl;
}