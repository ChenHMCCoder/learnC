#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	printf("This is a C program.\n");
	return 0;
}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//3行4列二维数组
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//3行4列二维数组
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}

	//char ch[5][6];
	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//可以省略行，不能省略列
	//return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]= %p\n", i, &arr[i]);
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素的个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a] [b] [c] [d] [e] [f]
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a', 'b', 'c' };//a b c
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//}

//int main()
//{
//	//创建一个数组-存放整型-10个
//	//
//	int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	char arr2[5] = {'a', 98};//98对应的ASCII码值为b
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算 arr4所占空间的大小
//	//7个元素 - char 7*1=7
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串的长度
//	//[a b c d e f \0]
//	//6
//	int n = 5;
//	//char ch[n];//err，[]里面放常量
//	return 0;
//}


//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数，1趟连续比较很多次，把最大的数放在最后面
//	int i = 0;
//	//先在原函数中计算出数组中的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)//说明已经有序了
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", *arr);
	printf("%p\n", *arr+1);
	
	return 0;
}