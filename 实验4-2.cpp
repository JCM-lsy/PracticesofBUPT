#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct Student
{
	string name;
	string sex;
	int age;
	string number;//������Ϊ�����ͻ�50%��
};
int main()
{
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i].name >> s[i].sex >> s[i].age >> s[i].number;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << setiosflags(ios::left)//��ඥ��д
			<< setw(10) <<s[i].name 
			<< setw(10) << s[i].sex 
			<< setw(10) << s[i].age 
			<< setw(10)	<< s[i].number << endl;
	}
}