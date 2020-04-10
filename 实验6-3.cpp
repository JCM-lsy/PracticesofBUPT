//编制程序，调用指针作为参数的函数，实现下面两字符串变量的交换。
//char* ap = "hello"; char* bp = "how are you"; 
//交换的结果为：ap 指向"how are you"，bp 指向"hello"。(注意：输出语句中的; 和.为英文符号)
//输入
//输出
//ap指向how are you;
//bp指向hello.
#include<iostream>
#include<string>
using namespace std;
void swap(char *p1, char *p2)
{
	char *p3;
	p3 = p1;
	p1 = p2;
	p2 = p3;
}
int main()
{
	const char *p1 = "hello", *p2 = "how are you";
	swap(p1, p2);
	cout << "p1 pointed to " << p1<<endl;
	cout << "p2 pointed to " << p2<<endl;
}