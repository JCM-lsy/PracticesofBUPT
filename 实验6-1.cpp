//��Ŀ����
//��д��Ӧ�ĳ�����ָ��ʵ�֣��Ӽ�������3��������va��vb��vc��
//ͨ��һ��ָ�����͵�ָ��iptr�����3�����е����ֵ��
//����
//1 2 3
//���
//3
#include<iostream>
using namespace std;
int main()
{
	int va, vb, vc;
	int *iptr;
	cin >> va>> vb>>vc;
	iptr = &va;
	if (va < vb) 
	{ 
		iptr = &vb;
		if (vb < vc)iptr = &vc;
	}
	if (va > vb) {
		if (va < vc)iptr = &vc;
	}
	cout << *iptr;
}