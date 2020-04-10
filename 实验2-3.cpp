//VC++实验2.3 数据的逆序输出
#include<iostream>
using namespace std;
int main()
{
	int x, a, b, c, d, y;
	cout << "put in a int" << endl;
	cin >> x;
	a = x / 1000;
	b = x / 100 - a * 10;
	c = x / 10 - b * 10 - a * 100;
	d = x % 10;
	y = d * 1000 + c * 100 + b * 10 + a;
	cout << y << endl;
}