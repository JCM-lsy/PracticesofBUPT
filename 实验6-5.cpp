/*用字符指针数组，将给定的5个字符串（可以是任意5个国家名字）进行排序并输出。
输入
China American France Spain Greece
输出
American
China
France
Greece
Spain
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char *p[5], g[5][10];
	for (int i = 0; i < 5; i++)
	{
		cin >> g[i];
		p[i] = g[i];
	}
	for(int i=0;i<5-1;i++)
		for(int j=0;j<5-1-i;j++)
			if (strcmp(p[j], p[j + 1]))
			{
				char *temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
	for (int i = 0; i < 5; i++)
		cout << *(p+i) << endl;
}