/*//VC++ʵ��2.1 ��ĸ��Сдת��*/
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
		cout << (char)toupper(x) << endl;//Сдת���ɴ�д
	else cout << (char)tolower(x) << endl;//��дת����Сд
}

