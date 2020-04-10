#include<iostream>
#include<ctime>
using namespace std;
int y;
void randR(int &y)
{
	srand((int)time(NULL));
	int x;
	x = rand() % 3 + 1;
	y = x;
	cout << "机器：" << " ";
	switch (x)
	{
	case 1:
		cout << "剪刀" << endl;
		break;
	case 2:
		cout << "石头" << endl;
		break;
	case 3:
		cout << "布" << endl;
		break;
	default:
		cout << "error!" << endl;
	}
}
void Judge(int x)
{
	if (x == y)cout << "平局" << endl;
	else if ((x == 1 && y == 2) || (x == 2 && y == 3) || (x == 3 && y == 1))
		cout << "你输了" << endl;
	else if ((x == 2 && y == 1) || (x == 3 && y == 2) || (x == 1 && y == 3))
		cout << "你赢了" << endl;
}
void print(int x)
{
	
	switch (x)
	{
	case 1:
		cout << "你出了:" << " ";
		cout << "剪刀;" << " ";
		break;
	case 2:
		cout << "你出了:" << " ";
		cout << "石头;" << " ";
		break;
	case 3:
		cout << "你出了:" << " ";
		cout << "布;" << " ";
		break;
	case 4:
		cout << "退出游戏" << endl;
		break;
	default:
		cout << "error!" << endl;
	}
}
int main()
{
	int x;
	cout << "游戏开始，请输入：（1-剪刀，2-石头，3-布,4-结束游戏）" <<" ";
	cin >> x;
	cout << endl;
	print(x);
	while (x != 4)
	{
		randR(y);
		Judge(x);
		cout << "游戏开始，请输入：（1-剪刀，2-石头，3-布,4-结束游戏）" << " ";
		cin >> x;
		cout << endl;
		print(x);
	}
}