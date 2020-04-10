///*
//题目描述
//编写三个函数，分别完成如下任务：
//函数一，计算整数a除以整数b的商的整数部分；
//函数二，计算整数a除以整数b的余数；
//函数三，用函数一和函数二完成分离整数各位的功能，对于输入的1～32767之间的整数，打印出一列数字，每个数字间空一个格。
//例如，输入：4562  输出：4 5 6 2
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
//    for(n = x; n > 9; n /= 10)  //m 用来计算位数
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