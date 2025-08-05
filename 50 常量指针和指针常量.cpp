#include <iostream>
using namespace std;

int main()
{
	//1、const修饰指针，常量指针
	int a = 10;
	int b = 10;

	const int* p = &a;
	//指针指向的值不可以改，但是指针的指向可以修改
	//* p = 20;错误
	p = &b;//正确

	//2、const修饰常量, 指针常量
	//指针的指向不能修改，指针指向的值可以修改
	int* const p2 = &a;
	*p2 = 100;//正确
	//p2 = &b;错误
	
	//3、const既修饰指针又修饰常量
	const int* const p3 = &a;
	//*p3 = 100;错误
	//p3 = &b;错误

	system("pause");

	return 0;

}