#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;//相同的数异或自己等于0；0异或任意一个数等于那个数。
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);//这个表达式每执行一次去掉n补码中最右边的一个1.
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//输入一个数判断判断其是否是2的次方数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if ((n & (n - 1)) == 0)
//	{
//		printf("%d是2的次方数",n);
//	}
//	else
//	{
//		printf("%d不是2的次方数", n);
//	}
//	return 0;
//}
//输入两个整数，求两个整数二进制格式有多少个位不同
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int c = n ^ m;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	int c = n ^ m;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((c >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	int c = n^m;
//	for (int i = 0; i < 32; i++)
//	{
//		if (c & 1 == 1)
//		{
//			count++;
//		}
//		c = c >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//题号下的不同代码表示这道题的不同解法。