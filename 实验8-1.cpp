/*定义一个学生基类Student，
包括私有数据成员：学校名、姓名、年龄，输出数据成员值的公有成员函数Print()。
再定义一个研究生类G_Student，公有继承方式派生于学生类Student，
其中新增私有数据成员：导师姓名，并定义输出研究生数据的公有成员函数Print()。
实现学生信息的输出。 
键盘输入：MIT Kate 20 Smith 
输出：MIT大学的Kate年龄20导师是Smith */
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
	cout << schoole_name << "大学的" << name << "年龄是" << age;
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
	cout << "导师是" << teacher;
}
int main()
{
	string a, b, d;
	int c;
	cin >> a >> b >> c >> d;
	yanjiu y(a, b, c, d);
	y.print2();
}