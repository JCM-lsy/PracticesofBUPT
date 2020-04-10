//VC++实验3.8 仓库结算
/*
某仓库共有ABCDE五种货物，每天需要补货的数量不同，每种货物的单价不同，如下所示。由键盘输入五种货物需要补货的数量，请计算出当日仓库需支付多少货款。由于补货时不一定按照ABCDE的顺序补货，建议使用switch语句与循环语句编写。
货物名称  货物单价
  A             10
  B             5
  C             3
  D             20
  E             13
输入
B 3 E 2 A 1 D 4 C 10
输出
161
*/
#include<iostream>
using namespace std;
int main()
{
	int m, sum = 0;
	char M;
	for (int i = 0; i < 5; i++)
	{
		cin >> M >> m;
		switch (M)
		{
		case'A' :
			sum += 10 * m;
			break;
		case'B':
			sum += 5 * m;
			break;
		case'C':
			sum += 3 * m;
			break;
		case'D':
			sum += 20 * m;
			break;
		case'E':
			sum += 13 * m;
			break;
		}
	}
	cout << sum << endl;
}