#include <iostream>
using namespace std;
void bubblesort(int* arr, int len)
{
	for (int i=0; i < len - 1; i++)
	{
		for (int j=0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i=0; i < len ; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

int main()
{
	//1���ȴ�������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = int(sizeof(arr)) / int(sizeof(arr[0]));
		//2������������ʵ��ð������
	bubblesort(arr, len);
	//3����ӡ����������
	printArray(arr, len);

	system("pause");
	return 0;

}