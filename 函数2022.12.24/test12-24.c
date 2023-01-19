#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include "Add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//函数的定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321，先是43,43是2个长度，2是1个长度
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//Swap2(int * px, int * py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap2( a , b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}

//当实参传给形参的时候
// 形参其实是实参的一份临时拷贝
// 对形参的修改时不会改变实参的
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//
//	//int tmp = 0;
//	//
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);//只是把a,b的值给了x,y，它本身没有发生变化
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//定义函数
//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(100, 300);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//	char arr1[] = "bit";
//	char arr2[] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory 内存 set 设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}