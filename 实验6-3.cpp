//���Ƴ��򣬵���ָ����Ϊ�����ĺ�����ʵ���������ַ��������Ľ�����
//char* ap = "hello"; char* bp = "how are you"; 
//�����Ľ��Ϊ��ap ָ��"how are you"��bp ָ��"hello"��(ע�⣺�������е�; ��.ΪӢ�ķ���)
//����
//���
//apָ��how are you;
//bpָ��hello.
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