/*//VC++实验2.1 字母大小写转换*/
/*#include<iostream>
using namespace std;
int main()
{
	char x, y;
	cin >> x;
	if ((x-'a')>0)
		y = x - 32;
	else y = x+32;
	cout << y;
}*/
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if ((x - 'a') >= 0)
		cout << (char)toupper(x) << endl;//小写转换成大写
	else cout << (char)tolower(x) << endl;//大写转换成小写
}

