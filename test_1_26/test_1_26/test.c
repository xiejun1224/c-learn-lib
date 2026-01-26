#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//memcpy的模拟实现
//void* my_memcpy(void* str1, const void* str2,size_t num)
//{
//	void * ret = str1;
//	while (num--)
//	{
//		*(char*)str1 = *(char*)str2;
//		str1 = (char*)str1 + 1;
//		str2 = (char*)str2 + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1,5*sizeof(int));
//	for (int i = 0; i <10 ; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//memmove的模拟实现
//void* my_memmove(void* dest, const void* cur, size_t num)
//{
//	void* ret = dest;
//	if (dest > cur)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)cur + num);
//		}
//	}
//	else
//		while (num--)
//		{
//			*(char*)dest = *(char*)cur;
//			dest = (char*)dest + 1;
//			cur = (char*)cur + 1;
//		}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//模拟实现strncpy

//测试strncpy是否吧'\0'拷贝过来
#include<string.h>
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[10] = "xxxxxxxx";
//	strncpy(arr2, arr1, 4);
//	printf("%s", arr2);
//	return 0;
//}
#include<assert.h>
#include<stdio.h>
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	
//	while (num>0&&*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//		
//		while (num>0)
//		{
//			*dest = '\0';
//			dest++;
//			num--;
//		}
//	
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	char*ret=my_strncpy(arr2, arr1, 7);
//	printf("%s\n", ret);
//	 ret = my_strncpy(arr2, arr1, 8);
//	printf("%s\n", ret);
//	return 0;
//}
//模拟实现strncat
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (num>0&&*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	if (num == 0)
//	{
//		*dest = '\0';
//	}
//	else
//	{
//		while (num)
//		{
//			*dest = '\0';
//			num--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xxxxxx";
//	char*ret=my_strncat(arr1, arr2, 3);
//	printf("%s\n", ret);
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xxxxxx";
//	char* ret = strncat(arr1, arr2, 3);
//	printf("%s\n", ret);
//	return 0;
//}
//模拟实现 memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 5 * sizeof(int));
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//模拟实现memmove
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1+4, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//编写判断大小端程序
int main()
{
	int a = 1;
	if (*(char*)&a == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}