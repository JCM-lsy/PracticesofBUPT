//VC++ʵ��5.1 �¶�ת��
/*
��Ŀ����
��д�������ѻ����¶�F��double�ͣ�ת��Ϊ�����¶�C��double�ͣ�����ʽΪC=(F-32)/1.8����������һ�������¶ȣ����Եõ���Ӧ�������¶ȡ�
����
32
���
0
*/
#include<iostream>
using namespace std;
int main()
{
	double f, c;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << c << endl;
}