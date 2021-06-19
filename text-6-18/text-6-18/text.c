#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		int j = 0;
		for (j = 0; j<sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j+ 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;//本趟排序其实不完全有序
			}
			else
				continue;
		}
		if(flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}