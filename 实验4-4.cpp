#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
const int N = 10;
int main()
{
	int a[N], i, j, temp, b;
	srand(time(NULL));
	for (i = 0; i < N; i++)
		a[i] = rand() % 100;         //�������0~99
	for (i = 0; i < N; i++)
		cout << setw(3) << a[i];
	cout << endl;
	for (i = 0; i < N - 1; i++)           //����ʹ���һ�������ѭ������Ϊ����������ľ�û��Ҫ�ȣ���������һ�����и���İ�������
	{
		for (int j = i + 1; j < N; j++)   //�˴���Ҫ�Ƚ����һ��
		{
			if (a[i] > a[j])             //��С��������ֵ
			{
				b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	for (i = 0; i < N; i++)
		cout << setw(3) << a[i];
	cout << endl;
}