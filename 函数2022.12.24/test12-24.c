#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include "Add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//�����Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321������43,43��2�����ȣ�2��1������
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
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}

//��ʵ�δ����βε�ʱ��
// �β���ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸�ʱ����ı�ʵ�ε�
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
//	Swap1(a, b);//ֻ�ǰ�a,b��ֵ����x,y��������û�з����仯
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//���庯��
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
//	//������ʹ��
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(100, 300);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ��������й�
//	char arr1[] = "bit";
//	char arr2[] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory �ڴ� set ����
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