// VC++ʵ��3.1 ����
//������򣺷��������ܱ�4����Ϊ���꣬2004�ǣ�2100���ǣ��������ܱ�400����Ϊ���꣬2000�ǣ�1900���ǡ�
#include<iostream>
using namespace std;
int main()
{
	int y;
	cout << "put in a year number" << endl;
	cin >> y;
	if (!(y % 100))
	{
		if (!(y % 400))
			cout<<"yes"<<endl;
		else cout << "no" << endl;
	}
	else {
		if (!(y % 4))
			cout << "yes" << endl;
		else cout << "no"<<endl;
	}
}