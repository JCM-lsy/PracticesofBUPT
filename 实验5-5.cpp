//VC++ʵ��5.5 ����ͳ��II
/*
��Ŀ����
���ִ�������10λ��ί��Ϊÿλѡ�ִ�֣�double�ͣ���
Ԥ�����ָ��ֵķ�����Ϊȥ��1����߷֡�1����ͷֺ�����8��������ƽ��ֵ��
�������ָ��ֵķ�����Ϊȥ��2����߷֡�2����ͷֺ�����6��������ƽ��ֵ��
ͨ����������10λ��ί�Ĵ�֣��Լ���ǰ�����ĸ��׶Σ�Ԥ��������1��ʾ������������2��ʾ����
�������У�ֻ�����������ݡ����÷������㺯���������������ּ��㲿�ֱ�д����������ɡ�
����
98.5 88 90 93 94 90.4 89 92 88.6 97 2
���
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

