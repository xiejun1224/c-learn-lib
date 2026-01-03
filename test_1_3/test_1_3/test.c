#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*对于给定的由小写字母和空格混合构成的字符串
s
s，将其翻转后输出。
保证给定的字符串
s
s 的首尾不为空格*/

//void F(char* arr,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int tem = 0;
//		tem = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tem;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//}
//int main()
//{
//	char arr[1000] = "hellow nowcoder";
//	int len = strlen(arr);
//	F(arr,len);
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//
//
//
//例如：
//
//
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB
//void X(char arr[],int k,int len)
//{
//	while (k)
//	{
//		int left = 0;
//		int right = len - 1;
//		if (left < right)
//		{
//			int tem = 0;
//			tem = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tem;
//		}
//		left++;
//		right--;
//		k--;
//	}
//	printf("%s", arr);
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	char arr[] = "ABCD";
//	int len = strlen(arr);
//	X(arr,k,len);
//	return 0;
//}
//模拟实现strlen
//int STRLEN(const char* arr)
//{
//	 const char* end = arr;
//	 while (*end != '\0')
//	 {
//		 end++;
//	}
//	 return end - arr;
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len=STRLEN(arr);
//	printf("%d", len);
//	return 0;
//}
//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。


//void F(int* arr,int sz)
//{
//	int i = 0;
//		while(i < sz)
//		{
//			if (*(arr + i) % 2 == 1)
//			{
//				printf("%d ", *(arr + i));
//			}
//			i++;
//	    }
//		int j = 0;
//		while (j < sz)
//		{
//			if (*(arr + j) % 2 == 0)
//			{
//				printf("%d ", *(arr + j));
//			}
//			j++;
//		}
//
//}
//int main()
//{
//	int arr[] = { 3,4,6,7,9,2,1,8,10,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	F(arr, sz);
//	return 0;
//}
// 写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组。
//void print(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr,len);
//}
void P(int* arr, int sz)
{
	int* p = arr;
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i;j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				int tem = 0;
				tem = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tem;
			}
		}
	}
}
void print(int* arr, int sz)
{
	int* p = arr;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;				
	}
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	P(arr,sz);
	print(arr,sz);

	return 0;
}
