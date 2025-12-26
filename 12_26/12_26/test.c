#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)越界访问在vs2022 X86环境下先创建的i是高地址而arr[10]是低地址，在数组内地址也是从低到高排列的
//                             当出现越界访问时超出数组大小外的地址可能与i的地址相遇，从而发生死循环，如这题的&arr[12]=&i。
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//int main()
//{
//	int money=0;
//	scanf("%d", &money);
//	int num = money;
//	int empty = money;
//	while (empty != 1)
//	{
//		num = num + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", num);
//	
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int count = 0;
//		int temp = i;
//
//		while (temp != 0)
//		{
//			temp = temp / 10;
//			count++;
//			
//		}
//		int sum = 0;
//		temp = i;
//		while (temp != 0)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = 0;
//	int i = 0;
//	int term = 0;
//	for (i = 0; i < 5; i++)
//	{
//		term = term * 10 + a;
//		Sn += term;
//	}
//	printf("%d", Sn);
//
//	return 0;
//}
//用“*”打印一个棱形
//int main()
//{
//	int line = 7;
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	int a = 6;
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * a - 1 - 2 * i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//打印1~100以内的素数。
//int main()
//{
//	for (int i = 2; i <= 100; i++)
//	{
//		int a = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				a = 0;
//				break;
//			}
//			else
//			{
//				a = 1;
//			}
//		}
//		if (a == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
