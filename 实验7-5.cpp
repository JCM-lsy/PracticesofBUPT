#include<iostream>
#include<string>
using namespace std;
class employee
{
private:
	int num;
	string name;
	int money;
	int year;
	int month;
	int day;
public:
	employee(int a, std::string b, int c, int d, int e, int f)
	{
		this->num = a;
		this->name = b;
		this->money = c;
		this->year = d;
		this->month = e;
		this->day = f;
	}
	int sum1(int x, int y);
	int sum2(int x, int y);
	int sum3(int x, int y);
	int sum4(int x, int y);
	int sum5(int x, int y);
};
int employee::sum1(int x, int y)
{
	int time = (x - 2000) * 12 + y - 10;
	int sum = time * 5000;
	return sum;
}
int employee::sum2(int x, int y)
{
	int time = (x - 2008) * 12 + y - 1;
	int sum = time * 4500;
	return sum;
}
int employee::sum3(int x, int y)
{
	int time = (x - 2003) * 12 + y - 7;
	int sum = time * 3800;
	return sum;
}
int employee::sum4(int x, int y)
{
	int time = (x - 2015) * 12 + y - 4;
	int sum = time * 5300;
	return sum;
}
int employee::sum5(int x, int y)
{
	int time = (x - 2016) * 12 + y - 3;
	int sum = time * 6000;
	return sum;
}
int main()
{
	employee a(1, "wang", 5000, 2000, 10, 23);
	employee b(2,"liu",4500,2008,1,20);
	employee c(3,"huo",3800,2003,7,3);
	employee d(4,"ma",5300,2015,4,10);
	employee e(5,"meng",6000,2016,3,16);
	int x, y, z;
	cin >> x >> y >> z;
	switch (x)
	{
	case 1:
		cout << "wang" << " ";
		cout << a.sum1(y, z) << endl;
		break;
	case 2:
		cout << "liu" << " ";
		cout << b.sum2(y, z) << endl;
		break;
	case 3:
		cout << "huo" << " ";
		cout << c.sum3(y, z) << endl;
		break;
	case 4:
		cout << "ma" << " ";
		cout << d.sum4(y, z) << endl;
		break;
	case 5:
		cout << "meng" << " ";
		cout << e.sum5(y, z) << endl;
		break;
	}
}