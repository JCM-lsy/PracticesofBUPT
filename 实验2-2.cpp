// VC++ʵ��2.2 ����Բ���ܳ������
#include<iostream>
#include<iomanip>
using namespace std;
const double pi = 3.1415;
double Ccircle(double x)
{
	double c;
	c = 2 * pi*x;
	return c;
}
double Scircle(double x)
{
	double s;
	s = pi * x*x;
	return s;
}
int main()
{
	double r;
	int n;
	cout << "put in the r"<<endl;
	cin >> r;
	cout << "put in the precision"<<endl;
	cin >> n;
	cout << "C=" << setprecision (n)<< Ccircle(r) << endl;//set precision�����ȣ� ->ȷ������
	cout << "S=" << setprecision(n+2) << Scircle(r) << endl;
}