//题目描述
//编写相应的程序用指针实现：从键盘输入3个整型数va、vb、vc，
//通过一个指向整型的指针iptr，输出3个数中的最大值。
//输入
//1 2 3
//输出
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