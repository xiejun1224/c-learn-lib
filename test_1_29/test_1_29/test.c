#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test()
{
	union str
	{
		char a;
		int  b;
	}s;
	s.b = 1;
	if (s.a == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
}
int main()
{
	test();
	return 0;
}
//atoi函数模拟实现
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
//int my_atoi(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		str++;
//		flag = -1;
//	}
//	long long ret = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			ret = 10 * ret + flag * (*str - '0');
//			if (ret > (INT_MAX))
//				return INT_MAX;
//			else if (ret < (INT_MIN))
//			{
//				return INT_MIN;
//			}
//		}
//		else
//			return (int)ret;
//
//		str++;
//	}
//	return (int)ret;
//}
//int main()
//{
//	char arr[] = "    24a5";
//	int ret=my_atoi(arr);
//	printf("%d\n", ret);
//	return 0;
//}
// 变种水仙花数
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//
//例如：
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number。
//int main()
//{	
//	for (int i = 10000; i < 99999; i++)
//	{
//		int num = 0;
//		for (int j = 10; j <= 10000; j *= 10)
//		{
//			num += (i / j) * (i % j);
//		}
//		if (num == i)
//		{
//			printf("%d ", num);
//		}
//
//	}
//	
//	return 0;
//}
//描述
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//若序列中有多个指定的数，需要一起删除。
//
//数据范围：序列长度和序列中的值都满足
//1
//≤
//n
//≤
//50
//1≤n≤50
//输入描述：
//第一行输入一个整数(0≤N≤50)。
//
//第二行输入N个整数，输入用空格分隔的N个整数。
//
//第三行输入想要进行删除的一个整数。
//
//输出描述：
//输出为一行，删除指定数字之后的序列。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int k = 0;
//	for (int j = 0; j < n; j++)
//	{
//		if (arr[j] != del)
//		{
//			arr[k] = arr[j];
//			k++;
//		}
//	}
//	for (int t = 0; t < k; t++)
//	{
//		printf("%d ", arr[t]);
//	}
//	return 0;
//}