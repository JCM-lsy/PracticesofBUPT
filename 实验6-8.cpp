/*请编写函数实现将一个数值插入到数组中适当的位置，
使新数组按降序排列，并将插入的位置输出到屏幕上。 
说明：
1）原数组大小和数值由键盘输入，动态创建数组；
2）插入的数值由键盘输入。
3)如果插入数据与原数组中某数据相同，则插在该数据之前。
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if (p[j] < p[j + 1])
			{
				int temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
	int *q = new int[n + 1];
	cin >> q[1];
	for (int i = 0; i < n + 1; i++)
		q[i + 1] = p[i];
	int count = 1;
	for (int j = 0; j < n +1; j++)
		if (p[j] < p[j + 1])
		{
			int temp;
			temp = p[j];
			p[j] = p[j + 1];
			p[j + 1] = temp;
			count++;
		}
	cout << count << endl;
}