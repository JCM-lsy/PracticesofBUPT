//动态申请一个一维整型数组，要求用户从键盘输入元素个数，
//采用new运算符分配空间，从键盘输入数组变量的值.
//写一个函数void Func(int* A, int nSize)，使A把0移至后面, 
//非0整数移至数组前面并保持有序(升序)。将排序后的数组变量的值输出到屏幕上，各数值间用一个空格隔开。
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