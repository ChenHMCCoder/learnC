#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	return 0;
}


//斐波那契数列
//1 1 2 3 5 8 13......
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//50
//49 48
//48 47
//47 46 46 45 45 44 44 43....

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	//TDD - 测试驱动开发，先写怎么用
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count = %d\n, count");
//	return 0;
//}

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}



//把大事化小
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}

//int my_strlen(char* str)//字符串末尾隐藏了一个\0
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//再调用print函数，直到n<=9直接打印
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}

//int main()
//{	
//	printf("hehe\n");
//	main();
//	return 0;
//}