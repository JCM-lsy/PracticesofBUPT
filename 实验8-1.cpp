/*����һ��ѧ������Student��
����˽�����ݳ�Ա��ѧУ�������������䣬������ݳ�Աֵ�Ĺ��г�Ա����Print()��
�ٶ���һ���о�����G_Student�����м̳з�ʽ������ѧ����Student��
��������˽�����ݳ�Ա����ʦ����������������о������ݵĹ��г�Ա����Print()��
ʵ��ѧ����Ϣ������� 
�������룺MIT Kate 20 Smith 
�����MIT��ѧ��Kate����20��ʦ��Smith */
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	string schoole_name;
	string name;
	int age;
public:
	void print();
	student(string a, string b, int c);
};
void student::print() {
	cout << schoole_name << "��ѧ��" << name << "������" << age;
}
student::student(string a, string b, int c)
{
	schoole_name = a;
	name = b;
	age = c;
}
class yanjiu :public student
{
private:
	string teacher;
public:
	void print2();
	yanjiu(string a, string b, int c, string d) :student(a, b, c) {
		teacher = d;
	}
};
void yanjiu::print2()
{
	print();
	cout << "��ʦ��" << teacher;
}
int main()
{
	string a, b, d;
	int c;
	cin >> a >> b >> c >> d;
	yanjiu y(a, b, c, d);
	y.print2();
}