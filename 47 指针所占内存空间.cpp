#include <iostream>
using namespace std;

int main()
{
	//指针所占内存空间
	int a = 10;
	//int * p
	//p = &a

	int* p = &a;

	//在64位操作系统下，指针是占8个字节空间大小,32位操作系统下，指针是占4个字节空间大小
	cout << "整型变量指针所占的字节数：" << sizeof(int*) << endl;
	cout << "双精度浮点型变量指针所占的字节数：" << sizeof(double*) << endl;
	cout << "字符串型变量指针所占的字节数：" << sizeof(char*) << endl;
	cout << "浮点型变量指针所占的字节数：" << sizeof(float*) << endl;

	system("pause");
	return 0;
}