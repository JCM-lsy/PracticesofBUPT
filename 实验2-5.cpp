//ʮ���Ƹ�ʽ��IP��ַ��Ϊ16����
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	typedef unsigned long int u_long;
	u_long b1, b2, b3, b4;
	char ch;
	u_long l_addr = 0;
	cout << "��������ʮ����IP��ַ";
	cin >> b4 >> ch >> b3 >> ch >> b2 >> ch >> b1;
	l_addr = l_addr | b3;
	l_addr = (l_addr << 8) | b3;
	l_addr = (l_addr << 8) | b2;
	l_addr = (l_addr << 8) | b1;
	cout << "��Ӧ�����Ƶ�ַΪ" << hex << l_addr << endl;
	return 0;

}