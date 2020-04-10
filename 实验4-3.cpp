#include<iostream>
using namespace std;
int main()
{
	double a[8];
	for (int i = 0; i < 8; i++)
		cin >> a[i];
	for(int i=0;i<7;i++)
		for(int j=0;j<7-i;j++)
			if (a[j] < a[j + 1])
			{
				double temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	double sum = 0;
	for (int i = 1; i < 7; i++)
		sum += a[i];
	double x = sum / 6;
	cout << x << endl;
}