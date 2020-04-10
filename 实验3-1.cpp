// VC++实验3.1 闰年
//闰年规则：非整百年能被4整除为闰年，2004是，2100不是；整百年能被400整除为闰年，2000是，1900不是。
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