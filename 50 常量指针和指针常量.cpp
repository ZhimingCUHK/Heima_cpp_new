#include <iostream>
using namespace std;

int main()
{
	//1��const����ָ�룬����ָ��
	int a = 10;
	int b = 10;

	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�����ָ���ָ������޸�
	//* p = 20;����
	p = &b;//��ȷ

	//2��const���γ���, ָ�볣��
	//ָ���ָ�����޸ģ�ָ��ָ���ֵ�����޸�
	int* const p2 = &a;
	*p2 = 100;//��ȷ
	//p2 = &b;����
	
	//3��const������ָ�������γ���
	const int* const p3 = &a;
	//*p3 = 100;����
	//p3 = &b;����

	system("pause");

	return 0;

}