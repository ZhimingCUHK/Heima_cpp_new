#include <iostream>
#include "swap.h"

using namespace std;

//函数的分文件编写
//1、创建头文件（.h)
//2、创建.cpp后缀名的源文件
//3、在头文件写函数的声明
//4、在源文件中写函数的定义

int main()
{
	int a1 = 10;
	int a2 = 20;

	swap(a1, a2);

	system("pause");
	return 0;
}