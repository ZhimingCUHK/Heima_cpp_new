#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int * p;
	//1������ָ��
	p = &a;

	cout << "a�ĵ�ַΪ " << &a << endl;
	cout << "ָ��pΪ " << p << endl;

	//2��ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ����ָ����ڴ�
	//ָ��ǰ��*��ʾ1�����ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	
	system("pause");
	return 0;
}