#include <iostream>
using namespace std;

//ʵ���������ֽ��н���
void change(int a1, int a2)
{
	int temp = a1;
	a1 = a2;
	a2 = temp;

}
//ָ��ʵ���������ֽ��н���
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
	//change(a1, a2);//ֵ���ݲ��ı�ʵ�ε���ֵ

	change2(&a1, &a2);//��ַ���ݸı�ʵ�ε���ֵ

	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;

	system("pause");
	return 0;
}
