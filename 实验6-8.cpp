/*���д����ʵ�ֽ�һ����ֵ���뵽�������ʵ���λ�ã�
ʹ�����鰴�������У����������λ���������Ļ�ϡ� 
˵����
1��ԭ�����С����ֵ�ɼ������룬��̬�������飻
2���������ֵ�ɼ������롣
3)�������������ԭ������ĳ������ͬ������ڸ�����֮ǰ��
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if (p[j] < p[j + 1])
			{
				int temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
	int *q = new int[n + 1];
	cin >> q[1];
	for (int i = 0; i < n + 1; i++)
		q[i + 1] = p[i];
	int count = 1;
	for (int j = 0; j < n +1; j++)
		if (p[j] < p[j + 1])
		{
			int temp;
			temp = p[j];
			p[j] = p[j + 1];
			p[j + 1] = temp;
			count++;
		}
	cout << count << endl;
}