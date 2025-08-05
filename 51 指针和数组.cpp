#include <iostream>
using namespace std;

int main()
{
	//指针和数组
	//利用指针访问数组元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "第一个元素" << arr[0] << endl;

	int* p = arr;

	cout << "第一个元素" << *p << endl;

	p++;//让指针偏后四个字节

	cout << "第二个元素" << *p << endl;

	cout << "遍历整个数组" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}