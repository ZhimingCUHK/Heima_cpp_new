#include <iostream>
using namespace std;

int main()
{
	//ָ�������
	//����ָ���������Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "��һ��Ԫ��" << arr[0] << endl;

	int* p = arr;

	cout << "��һ��Ԫ��" << *p << endl;

	p++;//��ָ��ƫ���ĸ��ֽ�

	cout << "�ڶ���Ԫ��" << *p << endl;

	cout << "������������" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}