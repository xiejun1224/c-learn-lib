#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)//注意不要把“等号”写成了“赋值”号，这样会导致死循环。
//				{
//					printf("*");
//				}
//				else if (j == n - 1 - i)//反斜杠当j与i满足j==n-1-i时打印"*".
//				{
//					printf("*");
//				}
//				else
//					printf(" ");//打印空格时注意要写成" ",不要写成"".
//
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n-1)
//				{
//					printf("* ");
//				}
//				else if (j == 0 || j == n-1)
//				{
//					printf("* ");题目要求“*”后要跟一个空格所以打印空白字符时因答应两个空白字符。
//				}
//				else
//					printf("  ");
//					
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		int arr[10][10] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf("%d ", arr[j][i]);
//			}
//			printf("\n");
//		}
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		int arr[10][10] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("%d ", arr[j][i]);//矩阵的转置输入的时候不转置打印的时候交换行和列。
//			}
//			printf("\n");
//		}
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = (10-1); i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 0 };
//	int c[100] = { 0 };
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (j = 0; j < m; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int a = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);		
//		a += arr[i];
//	}
//	printf("%lf", a/10.0);
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 2,3,4,5,6 };
//	int c[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", b[i]);
//	}
//
//	return 0;
//}1 2 3 4 5
   


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6 ,3,4,5,6,7};	
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &arr2[j]);
	}
	int i = 0;
	int j = 0;
	while (i < n && j < m)         //因为两个数组里的元素都是升序，所以先比较两个数组下标为0的元素，谁小打印谁，然后小的下标往后移一位
		//按照此规律一直比到i=n或者j=m，当(i < n && j < m)不在满足时说明要么i=n了或者j=m了，此时只需要把剩下的数组元素依次打印出来。
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
				i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
			
	}
	while (j < m)//进入这个循环的条件是(j<n)不在满足而 (j<m)满足只需要将剩下的arr2[j]打印出来即可。
	{
		printf("%d ", arr2[j]);
		j++;
	}
	while (i < n)//同理可得。
	{
		printf("%d ", arr1[i]);
		i++;
	}

	return 0;
}