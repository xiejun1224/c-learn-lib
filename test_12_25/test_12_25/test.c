#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
////写一个二分查找函数
////
////功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int n = 0;
//	
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了下标是%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("-1");
//	}
//	return 0;
//}
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void print()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	print();
//	return 0;
//}
//void y(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		printf("%d是闰年",n);
//	}
//	else
//	{
//		printf("%d不是闰年", n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	y(n);
//	return 0;
//}
//实现一个函数is_prime，判断一个数是不是素数。
//
//利用上面实现的is_prime函数，打印100到200之间的素数。
#include<math.h>
//void is_prime(int n)
//{
//	
//	if (n > 1)
//	{
//		int t = 1;
//		for (int i = 2; i < sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{				
//				t = 0;
//				break;
//			}
//		}
//		if (t == 0)
//		{
//			printf("%d不是素数", n);
//		}
//		else
//		{
//			printf("%d是素数", n);
//		}
//	}
//	else
//	{
//		printf("%d不是素数", n);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	is_prime(n);
//	return 0;
//}
//int is_prime(int n)
//{
//
//	if (n > 1)
//	{
//		int t = 1;
//		for (int i = 2; i < sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				t = 0;
//				break;
//			}
//		}
//		if (t == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//			
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	
//	
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

