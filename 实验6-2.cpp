/*��дһ������get_average()��ȡ��������Ԫ�ص�ƽ��ֵ��
Ҫ����������ȿ���������һά����Ԫ�ص�ƽ��ֵ��
Ҳ�������ά����Ԫ�ص�ƽ��ֵ��
��main()������ͨ�������һά����Array_1D�Ͷ�ά����Array_2D�������������
�ٶ�һά����Ϊa[5],��ά����Ϊb[2][3],һά����Ͷ�ά����ı���ֵ�ɼ��̷ֱ����룬
����Ļ�����һά����Ͷ�ά�����ƽ��ֵ��ƽ��ֵ����һ���ո�ֿ���
����
1 2 3 4 5
1 2 3 4 5 6
���
3 3.5
*/
#include<iostream>
using namespace std;
double get(int a[5])
{
	double sum = 0;
	for (int i = 0; i < 5; i++)
		sum += a[i];
	double x;
	x = sum / 5;
	return x;
}
double get(int a[2][3])
{
	double sum = 0;
	for (int i = 0; i < 2; i++)
		for(int j=0;j<3;j++)
		  sum += a[i][j];
	double x;
	x = sum / 6;
	return x;
}
int main()
{
	int A1[5], A2[2][3];
	for (int i = 0; i < 5; i++)
		cin >> A1[i];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
		  cin >> A2[i][j];
	cout << get(A1) << " ";
	cout << get(A2) << endl;
}