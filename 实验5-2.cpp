///*
//��Ŀ����
//��д�����������ֱ������������
//����һ����������a��������b���̵��������֣�
//����������������a��������b��������
//���������ú���һ�ͺ�������ɷ���������λ�Ĺ��ܣ����������1��32767֮�����������ӡ��һ�����֣�ÿ�����ּ��һ����
//���磬���룺4562  �����4 5 6 2
//*/
///*#include <iostream>
//
//using namespace std;
//
//int fun1(int a, int b)
//{
//    return a / b;
//}
//
//int fun2(int a, int b)
//{
//    return a % b;
//}
//
//int fun3(int x)
//{
//    int n, m = 1;
//    for(n = x; n > 9; n /= 10)  //m ��������λ��
//        m *= 10;
//    for(; m > 0; m /= 10)
//    {
//        if(m != 1)
//            cout << fun2(fun1(x, m), 10) << " ";
//        else
//            cout << fun2(fun1(x, m), 10);
//    }
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//    fun3(x);
//
//    return 0;
//}*/
//#include<iostream>
//using namespace std;
//int quzheng(int a,int b);
//int quyu(int a,int b);
//void print(int x);
//int main()
//{
//	int x;
//	cin >> x;
//	print(x);
//}
//int quzheng(int a,int b)
//{
//	int x = a /b;
//	return x;
//}
//int quyu(int a,int b)
//{
//	int x = a % b;
//	return x;
//}
//void print(int x)
//{
//	int m=1, n;
//	for (n = x; n > 9;n /= 10)
//	{
//		m *= 10;
//	}
//	for (; m > 0; m /= 10)
//	{
//		if (m != 1)cout << quyu(quzheng(x, m), 10)<<" ";
//	
//		else cout << quyu(quzheng(x, m), 10) << endl;
//	}
//}
#include<iostream>
using namespace std;
int quzheng(int a, int b)
{
	return a / b;
}
int quyu(int a, int b)
{
	return a % b;
}
void print(int x)
{
	int n, m = 1;
	for (int n = x; n > 9; n /= 10)
	{
		m *= 10;
	}
	for (; m > 0; m /= 10)
	{
		if (m != 1)
			cout << quyu(quzheng(x, m), 10) << " ";
		else cout << quyu(quzheng(x, m), 10) << endl;
	}
}
int main()
{
	int x;
	cin >> x;
	print(x);
}