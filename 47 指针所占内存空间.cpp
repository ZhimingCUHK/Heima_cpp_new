#include <iostream>
using namespace std;

int main()
{
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	//int * p
	//p = &a

	int* p = &a;

	//��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С,32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С
	cout << "���ͱ���ָ����ռ���ֽ�����" << sizeof(int*) << endl;
	cout << "˫���ȸ����ͱ���ָ����ռ���ֽ�����" << sizeof(double*) << endl;
	cout << "�ַ����ͱ���ָ����ռ���ֽ�����" << sizeof(char*) << endl;
	cout << "�����ͱ���ָ����ռ���ֽ�����" << sizeof(float*) << endl;

	system("pause");
	return 0;
}