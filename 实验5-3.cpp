//VC++ʵ��5.3 쳲���������
/*
��Ŀ����
�÷ǵݹ麯������Fibonacci���е�n���������һ��n�����Fibonacci���е�n���ֵ��
����
3
���
2
*/
//���ǵݹ�򵥣���ѡ��ݹ�
#include<iostream>
using namespace std;
int Fabo(int x)
{
	int sum = 0;
	if (x == 0)sum = 1;
	else if (x == 1)sum = 1;
	else sum = sum + Fabo(x - 1)+Fabo(x-2);
	return sum;
}
int main()
{
	int x;
	cin >> x;
	cout << Fabo(x) << endl;
}