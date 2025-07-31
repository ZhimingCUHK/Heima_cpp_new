#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int * p;
	//1、定义指针
	p = &a;

	cout << "a的地址为 " << &a << endl;
	cout << "指针p为 " << p << endl;

	//2、使用指针
	//可以通过解引用的方式来找到指针所指向的内存
	//指针前加*表示1解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	
	system("pause");
	return 0;
}