#include<iostream>
using namespace std;
int b[26] = { 0 };
void judge(char a)
{
	if (a >= 'a'&&a <= 'z')b[a - 'a']++;
	else if (a >= 'A'&&a <= 'Z')b[a - 'A']++;
}
int main()
{
	int n;
	cin >> n;
	char a[88] = {0};
	for (int i = 0; i < n+1; i++)
	{
		cin.getline(a, 88,'\n');
		int j = 0;
		while (a[j] != '\0')
		{
			judge(a[j]);
			j++;
		}
	}
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (b[i] != 0)
		{
			cout << char(i + 'a') << ":" << b[i] << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "×Ö·û´®ÖÐÎÞ×ÖÄ¸" << endl;
}