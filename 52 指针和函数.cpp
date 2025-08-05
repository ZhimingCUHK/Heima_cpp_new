#include <iostream>
using namespace std;

//实现两个数字进行交换
void change(int a1, int a2)
{
	int temp = a1;
	a1 = a2;
	a2 = temp;

}
//指针实现两个数字进行交换
void change2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a1 = 10;
	int a2 = 20;
	//change(a1, a2);//值传递不改变实参的数值

	change2(&a1, &a2);//地址传递改变实参的数值

	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;

	system("pause");
	return 0;
}
