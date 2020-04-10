/*编写一个函数get_average()获取整型数组元素的平均值。
要求这个函数既可以用来求一维数组元素的平均值，
也可以求二维数组元素的平均值。
在main()函数中通过具体的一维数组Array_1D和二维数组Array_2D测试这个函数。
假定一维数组为a[5],二维数组为b[2][3],一维数组和二维数组的变量值由键盘分别输入，
在屏幕上输出一维数组和二维数组的平均值，平均值间用一个空格分开。
输入
1 2 3 4 5
1 2 3 4 5 6
输出
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