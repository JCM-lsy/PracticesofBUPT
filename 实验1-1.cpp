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
	cout << "������" << " ";
	switch (x)
	{
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "ʯͷ" << endl;
		break;
	case 3:
		cout << "��" << endl;
		break;
	default:
		cout << "error!" << endl;
	}
}
void Judge(int x)
{
	if (x == y)cout << "ƽ��" << endl;
	else if ((x == 1 && y == 2) || (x == 2 && y == 3) || (x == 3 && y == 1))
		cout << "������" << endl;
	else if ((x == 2 && y == 1) || (x == 3 && y == 2) || (x == 1 && y == 3))
		cout << "��Ӯ��" << endl;
}
void print(int x)
{
	
	switch (x)
	{
	case 1:
		cout << "�����:" << " ";
		cout << "����;" << " ";
		break;
	case 2:
		cout << "�����:" << " ";
		cout << "ʯͷ;" << " ";
		break;
	case 3:
		cout << "�����:" << " ";
		cout << "��;" << " ";
		break;
	case 4:
		cout << "�˳���Ϸ" << endl;
		break;
	default:
		cout << "error!" << endl;
	}
}
int main()
{
	int x;
	cout << "��Ϸ��ʼ�������룺��1-������2-ʯͷ��3-��,4-������Ϸ��" <<" ";
	cin >> x;
	cout << endl;
	print(x);
	while (x != 4)
	{
		randR(y);
		Judge(x);
		cout << "��Ϸ��ʼ�������룺��1-������2-ʯͷ��3-��,4-������Ϸ��" << " ";
		cin >> x;
		cout << endl;
		print(x);
	}
}