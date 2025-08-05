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
	//1、先创建数组
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = int(sizeof(arr)) / int(sizeof(arr[0]));
		//2、创建函数，实现冒泡排序
	bubblesort(arr, len);
	//3、打印排序后的数组
	printArray(arr, len);

	system("pause");
	return 0;

}