//��̬����һ��һά�������飬Ҫ���û��Ӽ�������Ԫ�ظ�����
//����new���������ռ䣬�Ӽ����������������ֵ.
//дһ������void Func(int* A, int nSize)��ʹA��0��������, 
//��0������������ǰ�沢��������(����)�������������������ֵ�������Ļ�ϣ�����ֵ����һ���ո������
#include<iostream>
using namespace std;
void Fun(int *p, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (p[i] == 0)
			if (p[i + 1] == 0)break;
			else
			{
				if (p[n - 1 - count] == 0)
				{
					p[i] = p[n - 1 - 1 - count];
					p[n - 1 - count] = 0;
					count++;
				}
		        else{
				p[i] = p[n - 1 - count];
				p[n - 1 - count] = 0;
				count++;
			}
		}
	/*for (int i = 0; i < n; i++)
		cout << "#" << p[i] << "#";*/
	cout << endl;
	for(int i=0;i<n-1-count;i++)
		for(int j=0;j<n-i-1-count-1;j++)
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
	/*for (int i = 0; i < n; i++)
		cout << "#" << p[i] << "#";*/
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	Fun(p,n);
	for (int i = 0; i < n - 1; i++)
		cout << p[i] << " ";
	cout << p[n - 1] << endl;
}